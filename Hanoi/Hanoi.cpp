// Hanoi.cpp : Defines the entry point for the console application.
//
//Used Recursive Implementation of https://en.wikipedia.org/wiki/Tower_of_Hanoi
#include "stdafx.h"
#include "Hanoi.h"

void printList(list<int> pile)
{
	for (int number : pile)
	{
		cout << number << "\n";
	}
}

void move(int n, list<int> *source, list<int> *target, list<int> *auxiliary) 
{
	if (n > 0) 
	{
		move(n - 1, source, auxiliary, target);

		target->push_back(source->back());
		source->pop_back();

		//display progress

		move(n - 1, auxiliary, target, source);
	}
}

int main()
{
	cout << "How many steps?";
	cin >> input;

	for (int i = input; i > 0; i--)
	{
		a->push_back(i);
	}

	move(input, a, c, b);

	printList(*a);
	printList(*b);
	printList(*c);

	cin >> input;
    return 0;
}

