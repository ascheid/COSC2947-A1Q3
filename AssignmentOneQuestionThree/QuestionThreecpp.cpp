#include <stdio.h>
#include <iomanip>
#include <iostream>

using namespace std;


/*
Alvaro Scheid 09/29/2017
Object-Oriented Programming C++ - Algoma University
COSC2947 :: Assignment number 1
Descp: Write a program that uses fo statements to print the following patterns separately
	   one below the other. Use for loops to  generate the patterns. All asterisks (*) 
	   should be printed by a single statement of the form cou << '*'; (this causes the
	   asterisks to print side by side). [Hint: The last two patterns require that each
	   line begin with an apropirate number of blanks. Extra credit: Combine your code fr
	   om the four separete problems into a single program that prints all fou patterns
	   side by side by making clever use of nested for loops.]
*/

int main()
{
	int i = 0;
	for (i = 1; i < 11; i++) 
	{
		for (int j = 0; j < i; j++)
			cout << '*';
		cout << endl;
	}
	
	cout << endl;

	for (i = 10; i >= 0; i--)
	{
		for (int j = 0; j <= i; j++)
			cout << '*';
		cout << endl;
	}

	cout << endl;

	for (i = 10; i > 0; i--)
	{
		for (int j = 10; j > 0; j--)
			cout << (j <= i ? "*" : " ");
		cout << endl;
	}

	cout << endl;

	for (i = 1; i <= 10; i++)
	{
		for (int j = 10; j >= 1; j--)
		{
			cout << (j <= i ? "*" : " ");
		}
		cout << endl;
	}

	cout << endl;

	system("PAUSE");
	return 0;
}
