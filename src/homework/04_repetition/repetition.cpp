//add include statements
#include <iostream>

//Factorial Function
int factorial(int num)
{

    /* (int i = 1; i <= n; ++i) {
            factorial *= i;
    */

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
    auto a= num1;
    auto b= num2;

    while(a !=b)
    {
        //Swap if num1 is greater than num2
        if(a<b)
        {
            b = num1;
            a = num2;
        }
        //Keep subtracting until a = b 
        if(a>b)
        {
           a -= b; 
        }
    }
    return a;

}