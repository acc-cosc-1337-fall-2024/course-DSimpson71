//write include statements
#include <iostream>
#include "decisions.h"

//Declare variables
int menu_option;
int grade;


// Using statements
using std::cout; using std::cin; using std::string;

int main() 
{	
	cout<<"--------------------------\n";
	cout<<"Main Menu \n";
	cout<<"--------------------------\n";
	cout<<"1. Letter grade using if\n";
	cout<<"2. Letter grade using switch\n";
	cout<<"3. Exit\n";
	cout<<"--------------------------\n:";
	cin>>menu_option;

	if (menu_option == 1) // Calculate letter grade using if
	{
		cout<<"Using if\n";
		cout<<"Please input your grade (from 0 to 100)\n:";
	}
	else if (menu_option == 2) // Calculate letter grade using switch
	{
		cout<<"Using switch\n";
		cout<<"Please input your grade (from 0 to 100)\n:";
	}
	else if (menu_option == 3) //Exit
	{
		cout<<"Closing Program\n";
	}
	else
	{
		cout <<"Invalid input, closing program anyways\n";
	}
	return 0;
}