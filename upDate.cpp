

#include "upDate.h"

int upDate::julian( )//pass m, d, y returns julian
{
    
    int mon = ptr[0];
    int day = ptr[1];
    int year = ptr[2];
    
    int JD = day - 32075 + 1461*(year + 4800+(mon-14)/12)/4+367*
        (mon-2-(mon-14)/12*12)/12-3*((year+4900+(mon-14)/12)/100)/4;
    return JD;
}

void Julian2Greg( int JD, int & month, int & day, int & year )//pass in julian date and get m, d, y through parameter list and pass by ref
{
    int L;
    int N;
    int J;
    int K;
    int I;
    L = JD + 68569;
    N = 4 * L / 146097;
    L = L - ( 146097 * N + 3 ) / 4;
    I = 4000 * ( L + 1 ) / 1461001;
    L = L - 1461 * I / 4 + 31;
    J = 80 * L / 2447;
    K = L - 2447 * J / 80;
    L = J / 11;
    J = J + 2 - 12 * L;
    I = 100 * ( N - 49 ) + I + L;
    
    year = I;
    month = J;
    day = K;
    //cout<<month<<" "<<day<<" "<<year<<endl;
}

upDate::upDate()
{
    ptr = new int[3];
    ptr[0] = 5;
    ptr[1] = 11;
    ptr[2] = 1959;
    
    count++;
}

upDate::upDate( int m, int d, int y )
{
    //TODO add check to make sure day is valid
    ptr = new int[3];
    ptr[0] = m;
    ptr[1] = d;
    ptr[2] = y;
    
    count++;
}

//TODO make sure date is valid
upDate::upDate( int J )
{
    ptr = new int[3];
    Julian2Greg( J, ptr[0], ptr[1], ptr[2] );
    
    // ptr[0] = 5;
    // ptr[1] = 11;
    // ptr[2] = 1959;
    count++;
    
}

upDate::upDate( const upDate& d)
{
    if ( ptr == NULL)
    {
        ptr = new int[3];
        count++;
    }
    
    ptr[0] = d.ptr[0];
    ptr[1] = d.ptr[1];
    ptr[2] = d.ptr[2];
    

//assign values of date pointer into new stuff    
}//copy constructor

upDate::~upDate()
{
    //cout<<"Deleted ptr month "<<ptr[0]<<" day "<<ptr[1]<<" year "<<ptr[2]<<endl;
    delete[] ptr;
    count--;
    
}

int upDate::GetDateCount()
{
    return count;
}

void upDate::setDate( int m, int d, int y )
{
    ptr[0] = m;
    ptr[1] = d;
    ptr[2] = y;
}

int upDate::getMonth()
{
    return ptr[0];
}

int upDate::getDay()
{
    return ptr[1];
}

int upDate::getYear()
{
    return ptr[2];
}

string upDate::getMonthName()
{
    string m;
    int month = ptr[0];
    if ( month == 1 )
    {
        m = "January";
    }
    else if ( month == 2 )
    {
        m = "February";
    }
    else if ( month == 3 )
    {
        m = "March";
    }
    else if ( month == 4 )
    {
        m = "April";
    }
    else if ( month == 5 )
    {
        m = "May";
    }
    else if ( month == 6 )
    {
        m = "June";
    }
    else if ( month == 7 )
    {
        m = "July";
    }
    else if ( month == 8 )
    {
        m = "August";
    }
    else if ( month == 9 )
    {
        m = "September";
    }
    else if ( month == 10 )
    {
        m = "October";
    }
    else if ( month == 11 )
    {
        m = "November";
    }
    else if ( month == 12 )
    {
        m = "December";
    }
    return m;
}
