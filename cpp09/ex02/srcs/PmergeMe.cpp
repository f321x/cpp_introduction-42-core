#include "PmergeMe.hpp"

PmergeMe::PmergeMe(const char **input)
{
	_check_and_convert_input(input);
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	(void)src;
	throw std::runtime_error("Copy constructor should not be called");
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
	(void)src;
	throw std::runtime_error("Assignment operator should not be called");
}

void PmergeMe::_check_and_convert_input(const char **input)
{
	if (!input)
		throw std::runtime_error("Input is NULL");

	for (size_t i = 1; input[i]; i++) // skip the first element which is the program name
	{
		std::string input_string(input[i]);

		if (input_string.empty())
			throw std::runtime_error("Invalid, empty input param");

		for (size_t j = 0; j < input_string.size(); j++)
		{
			if (!std::isdigit(input_string[j]))
				throw std::runtime_error("Input is not a number: " + input_string);
		}
		long long number = std::stoll(input_string);
		if (number < 0 || number > INT_MAX)
			throw std::runtime_error("Input is not a valid positive int: " + input_string);

		_input_vector.push_back(number);
	}
	// check for duplicates
	if (_contains_duplicates_vec(_input_vector))
		throw std::runtime_error("Input contains duplicates");
}

bool PmergeMe::_contains_duplicates_vec(const std::vector<int> &input_vector)
{
	std::set<int> input_set(input_vector.begin(), input_vector.end());
	return input_set.size() != input_vector.size();
}

void PmergeMe::sort_vector()
{
	auto start = std::chrono::high_resolution_clock::now();
	// nothing to sort
	if (_input_vector.size() < 2)
	{
		_result_vec = _input_vector;
		return;
	}

	// split the input vector into pairs
	// if the input vector has an odd number of elements, the last element will be left unpaired (size 1 vector)
	std::vector<std::vector<int>> pairs_vector;
	std::optional<int> unpaired_element;
	for (size_t i = 0; i < _input_vector.size(); i += 2)
	{
		std::vector<int> pair;
		if (i + 1 < _input_vector.size())
		{
			// sort the pairs in ascending order
			if (_input_vector[i] > _input_vector[i + 1])
			{
				pair.push_back(_input_vector[i + 1]);
				pair.push_back(_input_vector[i]);
			}
			else
			{
				pair.push_back(_input_vector[i]);
				pair.push_back(_input_vector[i + 1]);
			}
		}
		else
		{
			unpaired_element = _input_vector[i];
			break;
		}
		pairs_vector.push_back(pair);
	}

	// recursively sort the pairs in ascending order
	std::vector<std::vector<int>> sorted_pairs = _merge_sort_vec(pairs_vector);

	// add the first element of each pair to the result vector
	for (size_t i = 0; i < sorted_pairs.size(); i++)
		_result_vec.push_back(sorted_pairs[i][0]);

	// add the last element of the last pair to the result vector
	// it is guaranteed to be the largest element
	_result_vec.push_back(sorted_pairs.back()[1]);

	// add the unpaired element to the result vector if it exists
	if (unpaired_element.has_value())
		_result_vec = _binary_search_insertion_vec(_result_vec, unpaired_element.value());

	// add the second element of each pair to the result vector trough binary search insertion
	for (size_t i = 0; i < sorted_pairs.size() - 1; i++) // skip the last pair because it's already inserted
	{
		int insertion_target = sorted_pairs[i][1];

		std::vector<int> temp;
		std::vector<int> inserted;
		if (unpaired_element.has_value() && _result_vec[i] == unpaired_element.value())
		{
			temp = std::vector<int>(_result_vec.begin(), _result_vec.begin() + i + 2);
			inserted = _binary_search_insertion_vec(std::vector<int>(_result_vec.begin() + i + 2, _result_vec.end()), insertion_target);
		}
		else
		{
			temp = std::vector<int>(_result_vec.begin(), _result_vec.begin() + i + 1);
			inserted = _binary_search_insertion_vec(std::vector<int>(_result_vec.begin() + i + 1, _result_vec.end()), insertion_target);
		}
		temp.insert(temp.end(), inserted.begin(), inserted.end());
		_result_vec = temp;
	}
	auto end = std::chrono::high_resolution_clock::now();
	_vec_sort_time = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
}

std::vector<std::vector<int>> PmergeMe::_merge_and_sort_vecs(std::vector<std::vector<int>> left, std::vector<std::vector<int>> right)
{
	std::vector<std::vector<int>> merged;
	size_t i = 0;
	size_t j = 0;

	while (i < left.size() && j < right.size())
	{
		if (left[i][0] < right[j][0])
		{
			merged.push_back(left[i]);
			i++;
		}
		else
		{
			merged.push_back(right[j]);
			j++;
		}
	}
	while (i < left.size())
	{
		merged.push_back(left[i]);
		i++;
	}
	while (j < right.size())
	{
		merged.push_back(right[j]);
		j++;
	}
	return merged;
}

std::vector<std::vector<int>> PmergeMe::_merge_sort_vec(std::vector<std::vector<int>> input_2d_vec)
{
	if (input_2d_vec.size() < 2)
		return input_2d_vec;
	int middle_index = input_2d_vec.size() / 2;
	return (_merge_and_sort_vecs(_merge_sort_vec(std::vector<std::vector<int>>(input_2d_vec.begin(), input_2d_vec.begin() + middle_index)),
								 _merge_sort_vec(std::vector<std::vector<int>>(input_2d_vec.begin() + middle_index, input_2d_vec.end()))));
}

// inserts item into target trough binary search insertion
std::vector<int> PmergeMe::_binary_search_insertion_vec(std::vector<int> sorted_target, int item)
{
	int low_index = 0;
	int high_index = sorted_target.size() - 1;
	while (low_index <= high_index)
	{
		int middle_index = low_index + (high_index - low_index) / 2; // avoids overflow

		if (sorted_target[middle_index] < item)
			low_index = middle_index + 1;
		else
			high_index = middle_index - 1;
	}
	sorted_target.insert(sorted_target.begin() + low_index, item);
	return sorted_target;
}

// required formatting:
// $> ./PmergeMe 3 5 9 7 4
// Before: 3 5 9 7 4
// After: 3 4 5 7 9
// Time to process a range of 5 elements with std::[..] : 0.00031 us
// Time to process a range of 5 elements with std::[..] : 0.00014 us
void PmergeMe::print_result()
{
	assert(_result_vec.size() == _result_deque.size());

	std::cout << "Before: ";
	for (size_t i = 0; i < _input_vector.size(); i++)
	{
		std::cout << _input_vector[i];
		if (i < _input_vector.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;

	std::cout << "After: ";
	for (size_t i = 0; i < _result_vec.size(); i++)
	{
		std::cout << _result_vec[i];
		if (i < _result_vec.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _input_vector.size() << " elements with std::vector: " << _vec_sort_time.count() << " us" << std::endl;
	std::cout << "Time to process a range of " << _input_vector.size() << " elements with std::deque: " << _deque_sort_time.count() << " us" << std::endl;
}

// deque zone

void PmergeMe::sort_deque()
{
	std::deque<int> input_deque(_input_vector.begin(), _input_vector.end()); // convert the cli input into the deque
	auto start = std::chrono::high_resolution_clock::now();
	// nothing to sort
	if (input_deque.size() < 2)
	{
		_result_deque = input_deque;
		return;
	}

	// split the input vector into pairs
	// if the input vector has an odd number of elements, the last element will be left unpaired (size 1 vector)
	std::deque<std::deque<int>> pairs_deque;
	std::optional<int> unpaired_element;
	for (size_t i = 0; i < input_deque.size(); i += 2)
	{
		std::deque<int> pair;
		if (i + 1 < input_deque.size())
		{
			// sort the pairs in ascending order
			if (input_deque[i] > input_deque[i + 1])
			{
				pair.push_back(input_deque[i + 1]);
				pair.push_back(input_deque[i]);
			}
			else
			{
				pair.push_back(input_deque[i]);
				pair.push_back(input_deque[i + 1]);
			}
		}
		else
		{
			unpaired_element = input_deque[i];
			break;
		}
		pairs_deque.push_back(pair);
	}

	// deque sort the pairs in ascending order
	std::deque<std::deque<int>> sorted_pairs = _merge_sort_deque(pairs_deque);

	// add the first element of each pair to the result vector
	for (size_t i = 0; i < sorted_pairs.size(); i++)
		_result_deque.push_back(sorted_pairs[i][0]);

	// add the last element of the last pair to the result vector
	// it is guaranteed to be the largest element
	_result_deque.push_back(sorted_pairs.back()[1]);

	// add the unpaired element to the result vector if it exists
	if (unpaired_element.has_value())
		_result_deque = _binary_search_insertion_deque(_result_deque, unpaired_element.value());

	// add the second element of each pair to the result vector trough binary search insertion
	for (size_t i = 0; i < sorted_pairs.size() - 1; i++) // skip the last pair because it's already inserted
	{
		int insertion_target = sorted_pairs[i][1];

		std::deque<int> temp;
		std::deque<int> inserted;
		if (unpaired_element.has_value() && _result_deque[i] == unpaired_element.value())
		{
			temp = std::deque<int>(_result_deque.begin(), _result_deque.begin() + i + 2);
			inserted = _binary_search_insertion_deque(std::deque<int>(_result_deque.begin() + i + 2, _result_deque.end()), insertion_target);
		}
		else
		{
			temp = std::deque<int>(_result_deque.begin(), _result_deque.begin() + i + 1);
			inserted = _binary_search_insertion_deque(std::deque<int>(_result_deque.begin() + i + 1, _result_deque.end()), insertion_target);
		}
		temp.insert(temp.end(), inserted.begin(), inserted.end());
		_result_deque = temp;
	}
	auto end = std::chrono::high_resolution_clock::now();
	_deque_sort_time = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
}

std::deque<std::deque<int>> PmergeMe::_merge_and_sort_deque(std::deque<std::deque<int>> left, std::deque<std::deque<int>> right)
{
	std::deque<std::deque<int>> merged;
	size_t i = 0;
	size_t j = 0;

	while (i < left.size() && j < right.size())
	{
		if (left[i][0] < right[j][0])
		{
			merged.push_back(left[i]);
			i++;
		}
		else
		{
			merged.push_back(right[j]);
			j++;
		}
	}
	while (i < left.size())
	{
		merged.push_back(left[i]);
		i++;
	}
	while (j < right.size())
	{
		merged.push_back(right[j]);
		j++;
	}
	return merged;
}

std::deque<std::deque<int>> PmergeMe::_merge_sort_deque(std::deque<std::deque<int>> input_2d_deque)
{
	if (input_2d_deque.size() < 2)
		return input_2d_deque;
	int middle_index = input_2d_deque.size() / 2;
	return (_merge_and_sort_deque(_merge_sort_deque(std::deque<std::deque<int>>(input_2d_deque.begin(), input_2d_deque.begin() + middle_index)),
								  _merge_sort_deque(std::deque<std::deque<int>>(input_2d_deque.begin() + middle_index, input_2d_deque.end()))));
}

// inserts item into target trough binary search insertion
std::deque<int> PmergeMe::_binary_search_insertion_deque(std::deque<int> sorted_target, int item)
{
	int low_index = 0;
	int high_index = sorted_target.size() - 1;
	while (low_index <= high_index)
	{
		int middle_index = low_index + (high_index - low_index) / 2; // avoids overflow

		if (sorted_target[middle_index] < item)
			low_index = middle_index + 1;
		else
			high_index = middle_index - 1;
	}
	sorted_target.insert(sorted_target.begin() + low_index, item);
	return sorted_target;
}
