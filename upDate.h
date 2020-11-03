
#ifndef UPDATE_H
#define UPDATE_H
#include <iostream>
using namespace std;

class upDate
{
    private:
        int *ptr;
        
    public:
        static int count;//everytim new object is created add +1 to count
        upDate();//default constructor set to May, 11, 1959
        upDate( int M, int D, int Y);//overloaded constructor
        upDate( int J );//overloaded constructor takes in Julian date and converts to regular date, if is not valid date then sets to default
        upDate( const upDate& d);//copy constructor
        ~upDate();//deallocate any memory that was allocated in consttructor
        void setDate( int M, int D, int Y);//sets date to parameters
        int getMonth();//gets month in integer form
        int getDay();//returns day
        int getYear();//returns year
        string getMonthName();//return name of the month
        int julian( );
        friend upDate operator+( int n, upDate d )
        {
            
        }
        friend ostream &operator<<( ostream &output, const upDate &up ){ 
            output << "Feet : " << up.ptr[0] << " Inches : " << up.ptr[1];
            return output;            
        }
        friend ostream &operator >>( ostream &i, upDate &d );
        upDate operator++( int i )
        {
            return upDate( this->ptr[0], this->ptr[1]++, this->ptr[2] );
        };//post incre dummy para
        upDate operator++()
        {
            return upDate( this->ptr[0], 1 + this->ptr[1], this->ptr[2] );
        };//pre incre
        
        //= operator
        // operator upDate()
        // {
        //     ptr[0] = this->ptr[0];
        //     ptr[1] = this->ptr[1];
        //     ptr[2] = this->ptr[2];
        // }
        
        upDate operator+=( const int& num )
        {
            return upDate( this->ptr[0], this->ptr[1] + num, this->ptr[2] );
        }
        
        


        
    /*
    TODOS:
    Add a copy constructor
    Add a = operator
    Add a == operaator
    Add a - operaator
    Add a + operaator
    Add a > operaator
    Add a < operaator
    
    PREFIX AND POSTFIX
    Add a -- operaator
    Add a ++ operaator
    */
    
};
#endif
