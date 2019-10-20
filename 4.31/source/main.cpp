#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int i, j, k,a;
	
	for (int i = 1; i <=9 ; i=i+2)
	{
		for (a = 9-i; a>=0; a=a-2)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		cout << "\n";
	}
	for (int i = 7; i >= 1; i = i - 2)
	{
		for (a = 9 - i; a >= 0; a = a - 2)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		cout << "\n";
	}

	

	system("pause");
	return 0;
	
}