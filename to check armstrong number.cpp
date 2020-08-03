#include <iostream>      //including input/output stream

using namespace std;     //using standard namespace

int main()              //main function
{
	int num1, num2, sum1=0, remainder=0;         //declaration of variables

	cout << "Enter Any Number : ";       //display

	cin >> num1;                      //storing user entered number in variable num1

	num2 = num1;                      //copying value of num1 into num2 for further process

	while (num2 != 0)                 //while loop runs until num2 is not equal to zero
	{
		remainder = num2 % 10;        //taking remainder of num2 to acheive target number

		sum1 += (remainder*remainder*remainder);   //taking cube root of the number which is acheived through taking remainder of num2

		num2 /= 10;                                //diving num2 by 10 to acheive next value in remainder and also to run loop without infinite loop issues
	}

	if (sum1 == num1)                               //if sum of all cubic numbers and the user given number is equal 
	{
		cout << "It Is An Armstrong Number : " << num1;      //than it is an armstrong number

		cout << "\n";                               //to add a new line

	}
	else                                               //if sum of all cubic numbers is not equal to the user given number
	{
		cout << "It Is Not An Armstrong Number : " << num1;             //than it is not an armstrong number

		cout << "\n";                               //to add a new line

	}
    
	system("pause");                            //to catch window

	return 0;                                   //return main function to zero
}
