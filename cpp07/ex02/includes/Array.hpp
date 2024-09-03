#pragma once

template <typename T>
class Array
{
public:
	// construction without parameter
	Array(void) : _array_data(NULL), _array_size(0) {}

	// construction with uint as parameter
	Array(unsigned int n) : _array_data(new T[n]), _array_size(n) {}

	// destructor
	~Array()
	{
		delete[] _array_data;
	}

	// copy constructor
	Array(const Array &other) : _array_data(new T[other._array_size]), _array_size(other._array_size)
	{
		for (size_t index = 0; index < _array_size; index++)
		{
			_array_data[index] = other._array_data[index];
		}
	}

	// assignment operator
	Array &operator=(const Array &other)
	{
		if (this != &other)
		{
			T *new_data = new T[other._array_size];
			for (size_t index = 0; index < other._array_size; index++)
			{
				new_data[index] = other._array_data[index];
			}
			delete[] _array_data;
			_array_data = new_data;
			_array_size = other._array_size;
		}
		return *this;
	}

	// accessing operator
	T &operator[](const size_t index)
	{
		if (index >= _array_size)
		{
			throw std::exception();
		}
		return _array_data[index];
	}

	// const accessing operator
	const T &operator[](size_t index) const
	{
		if (index >= _array_size)
		{
			throw std::exception();
		}
		return _array_data[index];
	}

	// size function
	size_t size(void) const
	{
		return _array_size;
	}

private:
	T *_array_data;
	size_t _array_size;
};
