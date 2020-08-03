
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float base, exponent, result = 1;  //declaration of variables

	cout << "\nEnter Base : "; //display

	cin >> base;  //storing user entered base in variable base

	cout << "\nEnter Exponent : "; //display

	cin >> exponent;  //storing user entered exponent in variable exponent


	for (int i = 0;i < exponent;i++)
	{
		result = result * base;      //multiplying base as many times as the exponent to get the resultant number

	}

	cout << "\nThe Resultant Number Is = " << result;    //display

	cout << "\n";          //to get space

	system("pause");       //to stop screen
}
