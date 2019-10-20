#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int main(void)
{
	float a=1, b, c, d,e, y, z;
	
	while (a!=-1) 
	{		
		cout << "Enter accout number (-1 to end): ";
		cin >> a;
		cout << "Enter beginning Balance: ";
		cin >> b;
		cout << "Enter total charges: ";
		cin >> c;
		cout << "Enter total credits: ";
		cin >> d;
		cout << "Enter credit limit: ";
		cin >> e;
		y = b + c - d;
		if (y > e)
		{
			cout << "Accout:       " << a << "\n";
			cout << "Credit limit: " << b << "\n";
			cout << "Balance:      " << y << "\n";
			cout << "credit limit Exceeded" << "\n\n";
		}	

	}
	
	
	system("pause");
	return 0;
}