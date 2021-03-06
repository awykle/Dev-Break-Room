// Preprosessor directives
#include "stdafx.h"
#include <iostream> // Includes basic input/output
#include <string> // Allows the use of the string data type


using namespace std;

// Prototypes
void DuckDebug();
void BlackJack();
void Timer();
void Poker();

// Main function
int main()
{
	int programChoice;


	cout << "Welcome to the Developer Break Room!\n";
	cout << "Please choose a program by entering a number. \n";
	cout << "1. Duck Debugging\n";
	cout << "2. Black Jack\n";
	cout << "3. Timer\n";
	cout << "4. Poker\n";

	cin >> programChoice;
	switch (programChoice) {
	case 1:
		DuckDebug();
		break;
	case 2:
		BlackJack();
		break;
	case 3:
		Timer();
		break;
	case 4:
		Poker();
		break;
	default:
		cout << "Please enter a valid number\n";
			break;
	}

    return 0;
}

void DuckDebug()
{
/*
Samuel Barlass
*/
	int potato = 1;
	// Design here for Duck Logo

	cout <<"              __     " << endl;
    cout <<"          ___( o)>   " << endl;
    cout <<"          \\ <_. )    " << endl;
    cout <<"           `---'     " << endl;
	cout << "Welcome to Duck Debugging! I am your personal unlicensed virtual mock philathropist!\n";
	
	while (potato == 1)
	{
		cout << "Please explain your problem to me in detail...\n";
		string x;
		getline(cin, x);
		cin.ignore(1000, '\n');
	}
}

void BlackJack()
{


}

void Timer()
{


}

void Poker()
{


}