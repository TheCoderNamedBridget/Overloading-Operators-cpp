
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
    /*
    myDate Bday;
	myDate duedate(9,23,2020);

	int x;
	int month, day, year;
	
	Bday.display();
	cout << endl;
	duedate.display();
	cout << endl;
	x = Bday.daysBetween(duedate);
	cout << "Master Gold is "<< x << " days old today";
	cout << endl;

	Bday.increaseDate(x);

	cout << "Now these 2 dates should be the same:";
	Bday.display();
	cout << '\t';
	duedate.display();
	cout << "\n\n";

	Bday.decreaseDate(x); // setting Bday back to original value

	month = duedate.getMonth();
	day = duedate.getDay();
	year = duedate.getYear();

	duedate.display();
	cout << " is also equal to "<<month<<"/"<<day<<"/"<<year<<endl;

	myDate July4(7,4,2020);
	cout << "This year the 4th of July happens "<< (July4.dayOfYear()-1) << "days after New Years\n\n";

	myDate bogus(23,12,2007);
	cout << "The value of the bogus date is:";
	bogus.display();
	cout << endl;

	myDate D5(8,21,2017);
	x = D5.dayOfYear();
	D5.decreaseDate(x-1);
	cout << "Happy Newyear 2017 happened on:";
	D5.display();
	cout << endl;
	
	cout << "Program is due on "<< duedate.dayName()<<endl;
	cout << "Master Gold was born on "<< Bday.dayName()<<endl;

	myDate today = duedate;
	cout << "\nHere are the dates for the next -2- weeks:\n";
	for (int i=0; i<14; i++)
	{
		today.display();
		cout << ":"<<today.dayName() << endl;
		today.increaseDate(1);
	}

	// find all the leap years since 1000
	int counter = 1;
	int leapSum = 0;
	cout << "\n\nLeap Years from 1000 to 2020\n\n";
	for (int y = 1000; y<=2020; y++)
	{
	
		myDate leapYear = myDate(12,31,y);
		//leapYear.display();
		//cout << ": ";
		//leapYear.dayOfYear();
		//cout << endl;
		if (leapYear.dayOfYear() == 366)
		{
			cout << y<<", ";
			leapSum++;
			if (counter++ % 12 == 0) 
			{
				cout<<endl;
			}
		}
	}
	cout<<"\b\b ";  // get rid of the last comma
	cout << "\n\nHere's the number of the above leapyears:"<<leapSum<<endl;
	cout << "\n\nPress enter to continue";
	getchar();
    */
    
    
    upDate D1( 10, 27, 2010);//overloaded constructor
    upDate D2( D1 );//copy constructor
    upDate D3 = D2;//also copy constructor - intialize D3 to be a copy of D2
    D1 = D2;//asssignment operator
    
    D1 += 5;//add 5 days to D1
    
    D1 -= 7;//sub 7 days from D1
    D3 = D2 + 5;//add 5 days to D2, assign result to D3
    D3 = 5 + D2;//add 5 days to D2, assign result to D3
    D3 = D2 - 4;//sub 4 days from D2, assgin result to D3
    int x = D1 - D2;//days between D5 and D4 can be pos or neg
    cout<<upDate::GetDateCount()<<endl;//static method returns num of upDate objects that exist
    cout<<D1;//prints "10/27/2010"
    D1++;//increment by one day postfix style
    ++D1;//increment by one day prefix style
    D1--;//decrement by one day postfix style
    --D1;//decrement by one day prefix style
    cout<<D1.julian();//prints julian date represented by D1
    
    cout<<endl<< "D1 == D2 ";
    D1 == D2;
    cout<<endl<< "D1 > D2 ";
    D1 > D2;
    cout<<endl<< "D1 < D2 ";
    D1 < D2;

        
    return 0;
}
