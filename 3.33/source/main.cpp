#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	float a = 1, b, c, d, e, i, j;

	
	cout << "Enter width: ";
	cin >> a;
	cout << "Enter height: ";
	cin>> b;
	for ( i = 0; i < a; i++)
	{
		cout << "+";
	}
	cout << "\n";
	for (j = 0; j < b-2; j++)
	{
		cout << "+";
		for (i = 0; i < a-2; i++)
		{
			cout << " ";
		}
		cout << "+\n";
	}
	for (i = 0; i < a; i++)
	{
		cout << "+";
	}


	

	system("pause");
	return 0;

}
