#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	float a = 1, b, c, d, e, y, z;

	while (a != -1)
	{
		cout << "Enter # of hours worked (-1 to end): ";
		cin >> a;


		if (a != -1)
		{
			cout << "Enter hourly rate of the worker($00.00): ";
			cin >> b;			
			d=a*b;
			if (a>40)
			{
				c = (a - 40)/2;
				d = d + c * b;
			}
			cout << "Salary is :" << d << "\n\n";
		}

	}


	system("pause");
	return 0;

}

