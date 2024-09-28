//add include statements
#include <iostream>

//Factorial Function
int factorial(int num)
{

    auto sum = 1;
   
    while(num > 0)
    {
       sum = num * sum;
       num--;
    }
    
    return sum;

}
//Greatest Common Divisor

int gcd(int num1, int num2)
{

    while(num1 != num2)
    {
        auto a = num1;
        auto b = num2;
        if(num1 < num2)
        {
            //Handles swapping
            num1 = b;
            num2 = a;
            
        }
        else if(num1 > num2)
        {
            //Run normally
            num1 = num1 - num2;
        }
        
    }
    return num1;
}


//Display Menu
void display_menu()
{
	std::cout<<"Main Menu\n";
	std::cout<<"1. Factorial\n";
	std::cout<<"2. Greatest Common Divisor\n";
	std::cout<<"3. Exit\n";
}

//Handling user input INCOMPLETE
int handle_input()
{
    int option;
    std::cin>>option;
	char confirm;
	auto number = 0;
	auto number2 = 0;

    if(option == 1)
    {
		std::cout<<"You chose Factorial\nPlease Enter a number\n";
		std::cin>>number;
		std::cout<<"The factorial of your input is "<<factorial(number)<<"\n \n";
    }
    else if(option == 2)
	{
		std::cout<<"You chose Greatest Common Divisor\nPlease Enter two numbers consecutively\n";
		std::cin>>number;
		std::cin>>number2;
		std::cout<<"The Greatest Common Divisor of your input is "<<gcd(number,number2)<<"\n \n";

	}
    else if(option == 3)
	{
		std::cout<<"You entered 3, are you sure you want to exit?\n";
		std::cout<<"Type y for yes or n for no\n";
		std::cin>>confirm;

		if(confirm == 'y')
		{
			std::cout<<"Closing Program.\n";
			
		}
		else if(confirm == 'n')
		{
		   std::cout<<"Okay, lol \n\n";
		}
		else
		{
			std::cout<<"You didnt enter y or n, (its case sensitive), going back to main menu\n";
		}
	}


    return 0;
}

// bool close_program()
// {
//    return true;
// }