#pragma once

#include "Toolkit.h"

#include <vector>

using namespace std;

template <class T>
class TOOLKIT_API BinarySearch
{
public:
    static int bsearch(const T& value, const vector<T>& list, int start, int end);

};