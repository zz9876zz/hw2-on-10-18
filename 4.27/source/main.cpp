#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int i,j,k,n = 0;
	int  x, y, z;
	int a[5000], b[5000], c[5000];
	for (i = 1; i <= 200; i++)
	{
		x = i * i;
		for (j = 1; j <= 200; j++)
		{
			y = j * j;
			for (k = 1; k <= 200; k++)
			{
				z = k * k;
				if (z == x + y)
				{
					a[n] = i;
					b[n] = j;
					c[n] = k;					
					n++;
				}
			}
		}
		
	}
	cout << "side1\t" << "side2\t" << "hypotenuse\n\n";
	for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\n";
	}
	system("pause");
	return 0;


}