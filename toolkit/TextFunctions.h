#pragma once
#include "Toolkit.h"

#include <vector>
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

namespace Toolkit
{
	const vector <string> ABC_CHOICE = {"a", "b", "c"};
	const string ABC_WARNING = "Please enter (a), (b), or (c).";
	const string YN_WARNING = "Error: please enter (y) or (n).";
	const string DEFAULT_WARNING = "Invalid choice. Please try again.";

	class TOOLKIT_API TextFunctions
	{
	public:
		static string GetValidString(string question, string warning = DEFAULT_WARNING, vector <string> options = ABC_CHOICE);

		static string GetValidYN(const string& question, const string& warning = YN_WARNING);

		static string InputToLower(string input);

		static bool ConfirmationDialog(const string& warningType);

		static bool Confirmation(const string& answer);

		static void Exit(string input);

		static void PauseToRead();

	};
}