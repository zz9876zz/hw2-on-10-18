#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	float a = 1, b, c, d, e, y, z;

	while (a != -1)
	{
		cout << "Enter loan principal (-1 to end): ";
		cin >> a;
		
		
		if (a != -1)
		{
			cout << "Enter interest rate: ";
			cin >> b;
			cout << "Enter term of the loan in days: ";
			cin >> c;
			d = a * b * c/365;
			cout << "The interest charge is :" << d << "\n\n";
		}

	}


	system("pause");
	return 0;

}

