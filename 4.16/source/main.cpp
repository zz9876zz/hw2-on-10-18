
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int a, b, c, x, y, z;
	std::cout << "input number 1~4 to choose graphics" << "\n";
	while (cin >> a)
	{
		cout << "\n";
		if (a == 1)
		{
			for (int i = 1; i <=10; i++)
			{
				for (int j = 1; j <=i; j++)
				{
					printf("%s", "*");
				}
				cout << "\n";
			}		
			
			cout << "\n" << "input number 1~4 to choose graphics" << "\n\n";
		}
		if (a == 2)
		{
			for (int i = 10; i >= 1; i--)
			{
				for (int j = 1; j <= i; j++)
				{
					printf("%s", "*");
				}
				cout << "\n";
			}		
			cout << "input number 1~4 to choose graphics" << "\n\n";
		}
		if (a == 3)
		{
			for (int i = 10; i >= 1; i--)
			{
				for (a = 0; a <10-i; a++)
				{
					cout << " ";
				}
				for (int j = 1; j <= i; j++)
				{
					printf("%s", "*");
				}
				cout << "\n";
			}
			cout << "input number 1~4 to choose graphics" << "\n\n";

		}
		if (a == 4)
		{
			for (int i = 1; i <= 10; i++)
			{

				for (a = 0; a < 10 - i; a++)
				{
					cout << " ";
				}
				for (int j = 1; j <= i; j++)
				{
					printf("%s", "*");
				}
				cout << "\n";
			}

			cout << "\n" << "input number 1~4 to choose graphics" << "\n\n";
		}


	}


	return 0;
}