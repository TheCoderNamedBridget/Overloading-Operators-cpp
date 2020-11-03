
/*
Bridget Naylor
Date:10/21/2020
Class: CECS 282 Section 04
Honesty statement:
I certify that this program is my own original work. I did not copy any part of this program from
any other source. I further certify that I typed each and every line of code in this program.
*/
#include <stdio.h>
#include "upDate.h"
#include <iostream>
using namespace std;



int upDate::count = 0;
int main()
{
    
    
    upDate D1( 10, 27, 2010);//overloaded constructor
    upDate D2( D1 );//copy constructor
    upDate D3 = D2;//also copy constructor - intialize D3 to be a copy of D2
    //D1 = D2;//asssignment operator
    D1 += 5;//add 5 days to D1
    
    //D1 -= 7;//sub 7 days from D1
    //D3 = D2 + 5;//add 5 days to D2, assign result to D3
    //D3 = 5 + D2;//add 5 days to D2, assign result to D3
    //D3 = D2 - 4;//sub 4 days from D2, assgin result to D3
    //int x = D5 - D4;//days between D5 and D4 can be pos or neg
    //cout<<upDate::GetDateCount();//static method returns num of upDate objects that exist
    cout<<D1;//prints "10/27/2010"
    D1++;//increment by one day postfix style
    ++D1;//increment by one day prefix style
    //D1--;//decrement by one day postfix style
    //--D1;//decrement by one day prefix style
    cout<<D1.julian();//prints julian date represented by D1
    /*
    if ( D1 == D2)
    if ( D1 > D2)
    if ( D1 < D2)
    */
        
    return 0;
}
