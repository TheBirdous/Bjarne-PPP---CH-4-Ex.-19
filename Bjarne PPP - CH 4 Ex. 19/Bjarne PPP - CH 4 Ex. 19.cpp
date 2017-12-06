#include "../../std_lib_facilities.h"

int main()
{
	vector<string> names;
	vector<int> scores;
	string name = "NoName";
	int score = 0;
	bool was_twice = false;

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
		cout << '\n' << "This is the vector output:\n";
		for (int i = 0; i < names.size(); i++)
		{
			cout << names[i] << '\t' << scores[i] << '\n';
		}
	}

	else
	{
		cout << "A name was entered twice, or no value was entered at all, thus no output could've been produced.\n";
	}
	keep_window_open();
	
}