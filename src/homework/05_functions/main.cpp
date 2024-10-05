#include <iostream>
#include "func.h"
#include <string>


using std::cout; using std::cin; using std::string;
int main() 
{
	auto option = 0;
	auto confirm = 'a';
	string test_str = "CATCATCG";
	string dna;
	do
	{
		main_menu();
		cin>>option;
		if(option == 1)
		{ //GC Content Function
			cout<<"Please enter a dna string\n";
			cin>>dna;
			get_gc_content(dna);
		}
		else if(option == 2)
		{//DNA Complement Function
			//Testing Reverse string
			//reverse_string(test_str);
			cout<<"Please enter a dna string\n";
			cin>>dna;
			get_dna_complement(dna);
		}
		else if(option == 3)
		{//Confirm player wants to exit
			cout<<"Please confirm that you want to exit\nEnter 'y' for yes and 'n' for no\n";
			cin>>confirm;
			if(confirm == 'y' || confirm =='Y')
			{
				cout<<"Alright, closing program\n";
				option= 999012;
			}
			else if(confirm == 'n' || confirm =='N')
			{
				cout<<"Acknowledged, never mind\n";
			}
			else
			{
				cout<<"That was not a valid input, going back to main menu\n";
			}


		}
		
	} while (option != 999012);

	return 0;
}


	