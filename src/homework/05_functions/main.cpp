#include <iostream>
#include "func.h"
#include <string>


using std::cout; using std::cin; using std::string;
int main() 
{
	// main_menu();
	string dna;
	cout<<"Please enter a dna string\n";
	cin>>dna;
	get_gc_content(dna);
	return 0;
}
