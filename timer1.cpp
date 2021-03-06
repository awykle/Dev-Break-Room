// timer1.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h> 
#include <conio.h>
#include <windows.h>


using namespace std;

int main()
{
	int m, s, h; //declares int variables

	cout << "POMODORO TIMER" << endl << endl
		
		<< "The Pomodoro Technique is a time management method developed" << endl
		<< "by Francesco Cirillo. The technique uses a timer to break down" << endl
		<< "work into intervals, traditionally 25 minutes in length," << endl
		<< "separated by short breaks. These intervals are named pomodoros," << endl
		<< "the plural in English of the Italian word pomodoro (tomato)," << endl
		<< "after the tomato-shaped kitchen timer that Cirillo used as a" << endl
		<< "university student. Closely related to concepts such as timeboxing" << endl
		<< "and iterative and incremental development used in software design," << endl
		<< "the method has been adopted in pair programming contexts." << endl << endl

		<< "There are six steps in the original technique:" << endl
		<< "1. Decide on the task to be done." << endl
		<< "2. Set the pomodoro timer(traditionally to 25 minutes)" << endl
		<< "3. Work on the task." << endl
		<< "4. End work when the timer rings and put a checkmark on a piece of paper." << endl
		<< "5. If you have fewer than four checks, take a short break (3 to 5 min)" << endl
		<< "6. After four pomodoros, take a longer break (15 to 30 min), repeat from step 1." << endl << endl

		<< "- From the Wiki Page: Pomodoro Technique" << endl << endl;

	cout << "Enter time in hours here (standard pomodoro = 0)" << endl;
	cin >> h;
	cout << "Enter time in minutes here (standard pomodoro = 25) " << endl;
	cin >> m;
	cout << "Enter time in seconds here (standard pomodoro = 0)" << endl;
	cin >> s;


	cout << "H:  " << h << " M:  " << m << " S:  " << s << endl;
	for (int hour = h; hour >= 0; hour--) //hour count down
	{
		for (int min = m; min >= 0; min--) //minute count down
		{
			if (min == 0 && h > 0) //resets minutes while hours are left
				m = 59;
			for (int sec = s; sec >= 0; sec--) //second count down
			{
				if (sec == 0 && m > 0) //resets seconds while minutes are left
					s = 59;
				Sleep(1000); //one second (1000 ms) intervals for timer
				system("cls"); //clear console so the timer resets

				cout << "Time remaining:" << endl; 
				cout << hour << " :hours " << min << " :mins " << sec << " :secs" << endl; //timer output
			}
				
		}
	}

	Beep(523, 500); // Makes a beep sound when the timer is done, 523 hertz for 500 milliseconds     

	Sleep(1000); //pause before ending
	cout << "END" << endl;

	return 0;

}
