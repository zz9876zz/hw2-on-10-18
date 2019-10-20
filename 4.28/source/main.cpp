#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int i, j, k, n = 0;
	int  x, y, z;
	
	cout << "Enter pay code(1~4):";
	cin >> x;
	
	switch (x)
	{	
	case 1:
		cout << "Enter fixed salary:";
		cin >>z;
		
		break;
	case 2:
		cout << "Enter hours:";
		cin >> y;
		cout << "Enter hourly wage:";
		cin >> i;
		if (y > 40)
		{
			z = (y - 40)*1.5*i + 40 * i;
		}
		else
		{
			z = y * i;
		}
		break;
	case 3:
		cout << "Enter gross weekly sales:";
		cin >> y;
		z=250+y*0.057;
		break;
	case 4:
		cout << "Enter fixed amoumt of each of the item:";
		cin >> y;
		cout << "Enter fixed amoumt of money:";
		cin >> i;
		z = y*i;
		break;
	default:
			break;
	}
	cout << "Weekly pay: " << z;
	system("pause");
	return 0;


}