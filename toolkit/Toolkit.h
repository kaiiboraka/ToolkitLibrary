//#include "..\..\_code\Utilities\Toolkit.h"
#pragma once

#ifdef TOOLKIT_EXPORTS
#define TOOLKIT_API __declspec(dllexport)
#else
#define TOOLKIT_API __declspec(dllimport)
#endif


#include "BinarySearch.h"
#include "TextFunctions.h"
#include "Vector3.h"

/*  namespace Toolkit{} inside headers
    using namespace Toolkit inside cpps
*/
namespace Toolkit
{
    class TOOLKIT_API Tools
    {
    public:
        template <typename T>
        static void Swap(T& val1, T& val2);
    };

}