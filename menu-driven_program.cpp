// ch_06_exercise_03 -- menu-driven program
#include <iostream>
using namespace std;
void showmenu();			// function prototypes

	
	int main()
	{
		showmenu();
		char choice;
		cin >> choice;
		while (choice != 'q')
		{
			switch(choice)
			{
			case 'c'	:
			case 'C'	:	cout << "A Lion is a carnivore.\n";
							break;
			case 'g'	:
			case 'G'	:	cout << "Monopoly is a game.\n";
							break;
			case 'p'	:
			case 'P'	:	cout << "Billy Joel is a pianist.\n";
							break;
			case 't'	:
			case 'T'	:	cout << "A Maple is a tree.\n";
							break;
			default		:	cout << "Thats not a choice.\n";
			}
			showmenu();
			cin >> choice;
		}
		cout << "Bye!\n";
		cin.get();
		cin.get();
		return 0;
	}

	void showmenu()
	{
		cout << "Please enter a c, p, t, or g:\n"
				"c) carnivore		p) pianist\n"
				"t) tree			g) game\n"
				"q) quit\n";
	}
