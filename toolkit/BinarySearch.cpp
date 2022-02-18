#include "pch.h"
#include "BinarySearch.h"

// must be a sorted Random-Access collection.
// Vector, Array, Deque

namespace Toolkit
{
	template<class T>
	static int bsearch(const T& value, const vector <T>& list, int start, int end)
	{
		if (end <= start)
		{
			return -1;
		}

		int middle = (start + end) / 2;

		if (list[middle] == value)
		{
			return middle;
		}

		else if (value < list[middle])
		{
			return bsearch(value, list, start, middle);
		}
		else
		{
			return bsearch(value, list, middle + 1, end);
		}
	}
}