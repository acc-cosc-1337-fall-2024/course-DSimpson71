//add include statements
#include <iomanip>  //Allows you to manipulate io statements, ctrl + left click for more info 
#include <iostream>
#include "func.h"

//add function code here
using std::cout; using std::cin;

void main_menu()
{
    cout<<"Please enter a number. \n";
    cout<<"1. Get GC Content\n";
    cout<<"2. Get DNA Complement\n";
    cout<<"3. Exit \n";
}


double get_gc_content(string dna)
{
    auto gc_content= 0.0;
    for(int i = 0; i < dna.size(); i++)
    {
        
        if(dna[i]== 'G')
        {
            gc_content += .125;
        }
        else if(dna[i] == 'C')
        {
            gc_content += .125;
        } 
    }
    cout<<gc_content<<"\n";
    return gc_content;
}