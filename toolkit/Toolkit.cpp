#include "pch.h"

#include "Toolkit.h"
using namespace Toolkit;

template <typename T>
static void Tools::Swap(T &val1, T &val2)
{
    T temp = val1;
    val1 = val2;
    val2 = temp;
}