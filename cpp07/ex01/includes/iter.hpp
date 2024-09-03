#pragma once

template <typename T, typename L, typename F>
void iter(T *address, L length, F function)
{
	for (L index = 0; index < length; index++)
	{
		function(address[index]);
	}
}
