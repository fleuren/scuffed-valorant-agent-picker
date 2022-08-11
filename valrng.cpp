#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

int main()
{

	int agent;
	int min = 1;
	int max = 6;
	string rc;
	int list;

//Role Selection
		int role;
		int pick;
		string c = "1. Astra\n" "2. Brimstone\n" "3. Omen\n" "4. Viper\n"; // 4 agents
		string d = "1. Jett\n" "2. Neon\n" "3. Phoenix\n" "4. Raze \n" "5. Reyna\n" "6. Yoru\n"; // 6 agents
		string i = "1. Breach\n" "2. Fade\n" "3. KAY/O\n" "4. Sova\n" "5. Skye\n"; // 5 agents
		string s = "1. Chamber\n" "2. Cypher\n" "3. Killjoy\n" "4. Sage\n"; // 4 agents
		string result = "Your chosen agent is: ";

		cout << "Very Scuffed Valorant Agent Picker\n";

		cout << "Please select your preferred agent role\n"
		"1: Controllers\n"
		"2: Duelists\n"
		"3: Initiators\n"
		"4: Sentinels\n"

		"\n"
		"Role Selected: ";

		do
		{
		cin >> role;
				
				switch (role)
				{
					case 1:
					cout << "Controllers\n";
					cout << c;
					break;

					case 2:
					cout << "Duelists\n";
					cout << d;
					break;
					
					case 3:
					cout << "Initiators\n";
					cout << i;
					break;

					case 4:
					cout << "Sentinels\n";
					cout << s;
					break;

					default:
					cout << "Invalid input\n";
					cout << "Please select your preferred agent role\n"
					"1: Controllers\n"
					"2: Duelists\n"
					"3: Initiators\n"
					"4: Sentinels\n";

					break;
				}
			}while (role >= 5);
			{
				cin.fail();
				cin.clear();
			}
			cout << endl;
			cout << "Please type '!r' to randomize your agent: ";
			cout << endl;

//Agent Randomization


if (role == 1)
{
	max = 4;
	list = role;
}
else if(role == 2)
{
	max = 6;
	list = role;
}
else if(role == 3)
{
	max = 5;
	list = role;
}
else if(role == 4)
{
	max = 4;
	list = role;
}
else
{
	cout << "invalid input";
}
do
{
	srand (time(NULL));	
	agent = rand() % (max - min + 1) + min;
	cin >> rc;
	}while (rc != "!r");
	{
	cout <<"You have rolled a: " << agent << endl << "Your given agent is: ";
	}

	cout << list;
	switch(list)
	{
		case 1:
		cout << endl;
		cout << "Agent List:";
		cout << endl;
		cout << c;
		cout << endl;
		cout << "Please select agent #" << agent <<".";
		break;

		case 2:
		cout << endl;
		cout << "Agent List:";
		cout << endl;
		cout << d;
		cout << endl;
		cout << "Please select agent #" << agent <<".";
		break;

		case 3:
		cout << endl;
		cout << "Agent List:";
		cout << endl;
		cout << i;
		cout << endl;
		cout << "Please select agent #" << agent <<".";
		break;

		case 4:
		cout << endl;
		cout << "Agent List:";
		cout << endl;
		cout << s;
		cout << endl;
		cout << "Please select agent #" << agent <<".";
		break;

		default:
		cout << "How are you here, wtf?";
		break;
	}

	return 0;
}