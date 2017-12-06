#include "../../std_lib_facilities.h"

int main()
{
	vector<string> names;
	vector<int> scores;
	vector<string> found_names;
	string name = "NoName";
	int score = 0;
	bool was_twice = false;
	bool found_match = false;

	cout << "Please enter a name (name can not be entere twice) and an integer separated by space, to terminate input, please enter: NoName 0:\n";
	while (cin >> name >> score)
	{
		if ((name != "NoName" || name != "noname") && (score != 0))
		{
			names.push_back(name);
			scores.push_back(score);
	
		}
		else
		{
			cout << "The loop will now terminate.\n";
			break;
		}
	}

	for (int i = 1; i < names.size(); i++)
	{
		if (names[i] == names[i - 1])
		{
			was_twice = true;
			break;
		}
	}

	if (was_twice == false && names.size() > 0)
	{
		cout << '\n' << "Please enter a name for which you'd like to see a score.\n:";
		while (cin >> score)
		{
			found_match = false;
			found_names.clear();

			for (int i = 0; i < scores.size(); i++)
			{
				if (score == scores[i])
				{
					found_names.push_back(names[i]);
					found_match = true;
				}
				else if (i == names.size() - 1 && found_match == false)
				{
					cout << "name not found\n";
				}
				if (i == names.size() - 1 && found_match == true)
				{
					cout << "The name(s) for the score of " << score << " is/are: { ";
						for (string x : found_names)
						{
							cout << x << " ";
						}
					cout << "}.\n";
				}
			}
		
		}
	}

	else
	{
		cout << "A name was entered twice, thus no output could've been produced.\n";
	}
	keep_window_open();
	
}