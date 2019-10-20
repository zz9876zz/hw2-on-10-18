#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	float a = 1, b, c, d, e, y, z;

	while (a != -1)
	{					
		
		cout << "Enter sales in dollars (-1 to end): ";
		cin >> a;
	
		if (a != -1)
		{
			b = a * 0.09 + 200;
			cout << "Salary is :" << b << "\n";
		}
		
	}


	system("pause");
	return 0;
	
}

