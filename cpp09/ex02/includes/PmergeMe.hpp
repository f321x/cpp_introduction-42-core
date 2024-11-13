#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <optional>
#include <chrono>

class PmergeMe
{
public:
	PmergeMe(const char **input);
	~PmergeMe();

	void sort_vector();
	void sort_deque();
	void print_result();

private:
	PmergeMe();
	PmergeMe(const PmergeMe &src);
	PmergeMe &operator=(const PmergeMe &src);

	std::vector<int> _input_vector;

	std::vector<int> _result_vec;
	std::chrono::duration<double> _vec_sort_time;
	std::deque<int> _result_deque;
	std::chrono::duration<double> _deque_sort_time;

	void _check_and_convert_input(const char **input);
	bool _contains_duplicates_vec(const std::vector<int> &input_vector);
	std::vector<std::vector<int>> _merge_sort_vec(std::vector<std::vector<int>> input_2d_vec);
	std::vector<std::vector<int>> _merge_and_sort_vecs(std::vector<std::vector<int>> left, std::vector<std::vector<int>> right);
	std::vector<int> _binary_search_insertion_vec(std::vector<int> sorted_target, int item);

	// deque
	bool _contains_duplicates_deque(const std::deque<int> &input_deque);
	std::deque<std::deque<int>> _merge_sort_deque(std::deque<std::deque<int>> input_2d_deque);
	std::deque<std::deque<int>> _merge_and_sort_deque(std::deque<std::deque<int>> left, std::deque<std::deque<int>> right);
	std::deque<int> _binary_search_insertion_deque(std::deque<int> sorted_target, int item);
};
