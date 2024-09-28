//write include statements
#include <iostream>
#include "repetition.h"

//write using statements
using std::cout; using std::cin;


int main() 
{
	auto option = 0;
	char confirm;
	auto number = 0;
	auto number2 = 0;
	do
	{
		cout<<"Main Menu\n";
		cout<<"1. Factorial\n";
		cout<<"2. Greatest Common Divisor\n";
		cout<<"3. Exit\n";
		cin>>option;

		if(option == 1)
		{
			cout<<"You chose Factorial\nPlease Enter a number\n";
			cin>>number;
			cout<<"The factorial of your input is "<<factorial(number)<<"\n \n";

		}
		else if(option == 2)
		{
			cout<<"You chose Greatest Common Divisor\nPlease Enter two numbers consecutively\n";
			cin>>number;
			cin>>number2;
			cout<<"The Greatest Common Divisor of your input is "<<gcd(number,number2)<<"\n \n";

		}
		else if(option == 3)
		{
			cout<<"You entered 3, are you sure you want to exit?\n";
			cout<<"Type y for yes or n for no\n";
			cin>>confirm;

			if(confirm == 'y')
			{
				cout<<"Closing Program.\n";
				option = 99;
			}
			else if(confirm == 'n')
			{
				cout<<"Okay, lol \n\n";
			}
			else
			{
				cout<<"You didnt enter y or n, (its case sensitive), going back to main menu\n";
			}
		}

	} 
	while (option!= 99);
	
		
	return 0;
}



