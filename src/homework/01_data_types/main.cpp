//write include statements
#include <iostream>
#include "data_types.h" // Tells C++ where to find the multiply numbers function
//write namespace using statement for cout
// using namespace std;
using std::cout; using std::cin;

int main()
{
	int num = 0;
	// cout<<"num is equal to"<<" "<<num<<"\n"; --- To make sure that i was using the cin command properly
	cout<<"Enter a number (integer)"<<"\n";
	cin>>num;
	// cout<<"num is now equal to"<<" "<<num<<"\n"; --- ^^^
	int result = multiply_numbers(num);
	cout<<num<<" "<<"multiplied by 5 \n";
	cout<<"Result is : "<<result<<"\n";

	//
	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"num1 multiplied by 5 \n";
	cout<<"Result is : "<<result<<"\n";

	return 0;
}
