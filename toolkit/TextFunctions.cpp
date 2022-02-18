#include "pch.h"
#include "TextFunctions.h"

using namespace Toolkit;

string TextFunctions::GetValidString(string question, string warning, vector<string> options)
{
	string input;
	string validString;
	bool validInput = false;

	do
	{ // Non-numeric input validation do-while
		cout << question << endl;
		getline(cin, input);
		input = InputToLower(input);

		if (options.size() == 0)
		{
			validString = input;
			validInput = true;
		}
		else
		{
			for (unsigned int i = 0; i < options.size(); i++)
			{
				if (input == options[i])
				{ // yes or no input validation
					validString = input;
					validInput = true;
					break;
				}
				else if (input == "quit" || input == "exit" || input == "restart")
				{ // catch the input in case they want to exit
					if (ConfirmationDialog(input))
					{ // if the user confirms "y"es, then
						Exit(input);
					}
					else
					{
						break;
					}
				}
				else
				{ // if they put something else besides validInput (e.g. options or QUIT/RESTART)
					validInput = false;
				}
			}
			if (!validInput)
			{
				cout << warning << endl
					 << endl;
			}
		}
	} while (!validInput); // end of Non-numeric input validation do-while

	return validString;
}

string TextFunctions::GetValidYN(const string &question, const string &warning)
{
	string input;
	string validYN;
	bool validInput = false;

	while (!validInput)
	{ // Non-numeric input validation do-while
		cout << question << endl;
		getline(cin, input);
		input = InputToLower(input);

		if (input == "y" || input == "yes" ||
			input == "n" || input == "no")
		{ // yes or no input validation
			validYN = input;
			validInput = true;
		}
		else
		{ // if they put something else besides valid input
			cout << warning << endl
				 << endl;
			validInput = false;
		}
	}
	return validYN;
}

string TextFunctions::InputToLower(string input)
{
	transform(input.begin(), input.end(), input.begin(), ::tolower);
	return input;
}

bool TextFunctions::ConfirmationDialog(const string &warningType)
{
	string answer = GetValidYN("Are you sure you want to " + warningType + "? (y/n)");
	return Confirmation(answer);
}

bool TextFunctions::Confirmation(const string &answer)
{
	return (answer == "y" || answer == "yes");
}

void TextFunctions::Exit(string input)
{
	if (input == "quit" || input == "exit")
	{
		// cout << endl << "Thanks for playing. Goodbye!";
		exit(0);
	}
	else
	{
		return;
	}
}

void TextFunctions::PauseToRead()
{
	cout << setw(30) << right << setfill(' ') << "...Press enter to continue..." << endl;
	cin.ignore();
}