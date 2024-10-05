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
    int dna_size = dna.size(); //Passing the value to a variable to get rid of error message and make C++ happy
    
    for(int i = 0; i < dna_size; i++)
    {
        
        if(dna[i]== 'G')
        {
            gc_content += (1.0/dna_size);
        }
        else if(dna[i] == 'C')
        {
            gc_content += (1.0/dna_size);
        } 
    }
    cout<<"GC content is "<<gc_content<<"\n";
    return gc_content;
}

string reverse_string(string dna)
{
    string new_string = "";
    int dna_size = dna.size(); //Passing the value to a variable to get rid of error message and make C++ happy
    
    for(int i = (dna_size-1); i >= 0; i--)
    {
        new_string +=dna[i];
    }
    return new_string;
}

string get_dna_complement(string dna)
{ 
    dna = reverse_string(dna);
    int dna_size = dna.size(); //Passing the value to a variable to get rid of error message and make C++ happy
    for(int i = 0; i < dna_size; i++)
    {
        
        if(dna[i]== 'G')
        {
           dna[i] = 'C';
        }
        else if(dna[i] == 'C')
        {
            dna[i] = 'G';
        } 
        else if(dna[i] == 'A')
        {
            dna[i] = 'T';
        } 
        else if(dna[i] == 'T')
        {
            dna[i] = 'A';
        } 
    }
    cout<<"Reverse complement is "<<dna<<"\n";
    return dna;
}