#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main()
{

	float a = 5000, b, c, d, e, z;
	
	
	for (int i = 0; i <=4 ; i++)
	{
		cout << "Investment: $5000 \n";
		cout << "Years: 15 \n";
		c = (10 + i * 0.5)*0.1;
		cout << "Interest rates:" << c*10<< "%\n";
		double y = 5000 * pow(1.0 + c, 15);
		cout << "Future Value:" ;
		printf("%.2f\n\n", y);	
		
	}

	
		


		

	


	system("pause");
	return 0;

}
