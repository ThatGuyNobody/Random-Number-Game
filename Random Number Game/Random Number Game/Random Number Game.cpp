// Random Number Game.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	std::srand((int)std::time(0));
	int x = (rand() % 100) + 1;
	int t = 0;//while int
	int i = 0;//guess int

	cout << "Guess the number" << endl;

	cout << "You have 5 tries, good luck" << endl;

	cout << "please enter your number" << endl;



	while (t < 5)
	{
		cin >> i;

		if (i > x)
		{
			cout << "Lower" << endl;
		}
		else if (i < x)
		{
			cout << "Higher" << endl;
		}

		if (i == x)
		{
			cout << "You Guessed Correctly" << endl;
		}


		t++;
	}


	if (t >= 5 && i != x)
	{
		cout << "You have failed" << endl;
	}
	system("pause");
	return 0;
}
