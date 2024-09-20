//write include statements
#include <iostream>
#include "hwexpressions.h"

//Declare variables //meal_amount, tip_rate, tip_amount, tax_amount, and total
double meal_amount;
double tip_rate;
double tip_amount;
double tax_amount;
double total;


//write namespace using statement for cout
using std::cout; using std::cin;
	
int main()
{
	//Get meal amount
	cout<<"Please enter meal amount:\n";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	
	//Get tip rate
	cout<<"Also, enter tip rate (ranging from 0.01 for 1% and 1 for 100%)\nExample .15 is 15 percent. \n";
	cin>>tip_rate;
	tip_amount = get_tip_amount(meal_amount,tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	
	//Display receipt
	cout<<"--------------------------------------------------------------------------------------\n";
	cout<<"Thank you for shopping with us\nMeal amount = $"<<meal_amount<<"\nSales tax = $"<<tax_amount<<"\nTip amount = $"<<tip_amount;
	cout<<"\nTotal = $"<<total;
	cout<<"\n--------------------------------------------------------------------------------------\n";
	return 0;



}
