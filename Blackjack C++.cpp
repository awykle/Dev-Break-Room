// ConsoleApplication12.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

void printData(int playerTotal, int dealerCard) 
{

	cout << "\nYour total is " << playerTotal;
	cout << "\nDealer has a " << dealerCard << " showing.\n";

}

int getCard() {

	return rand() % 11 + 2;

}

void turn(int& playerTotal, char choice, bool& stay) {

	// If the user wants to hit
	if (choice == 'H' || choice == 'h') {

		// If the user hits 21 or above
		if ((playerTotal += getCard()) >= 21) {

			cout << "Your total is " << playerTotal;
			stay = true;

		}

		return;
	}

	// Since the only other option can be to stay, then stay
	stay = true;

}

int main() {

	bool stay;
	char choice = NULL;

	while (true) {

		cout << "===================================================================";
		stay = false;

		// Initialize srand and get random card numbers
		srand(time(0));
		int dealerCard = getCard();
		int playerTotal = getCard() + getCard();
		int dealerTotal = dealerCard + getCard();


		// Player's turn
		while (!stay) {

			printData(playerTotal, dealerCard);
			cout << "[H]it or [S]tay?\n";
			cin >> choice;
			turn(playerTotal, choice, stay);

		}

		stay = false;
		 cout << "\n\nIt is now the dealer's turn!\n";

		// Dealer's turn
		while (dealerTotal <= 21 && !stay) {

			if (dealerTotal >= 17)
				stay = true;
			else
				dealerTotal += getCard();

		}

		// Display winner
		 cout << "\n\nThe player has " << playerTotal << ".\nThe dealer has " << dealerTotal << ".\n\n";
		if (( abs(21 - playerTotal)) < ( abs(21 - dealerTotal)))  cout << "The player wins!\n";
		else  cout << "The dealer wins!\n";

	}

}

