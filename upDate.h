
#ifndef UPDATE_H
#define UPDATE_H
#include <iostream>
using namespace std;

class upDate
{
    private:
        int *ptr = NULL;
        
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
        
        void display();//display date in format (month, day, year) no endl after
        void increaseDate( int N );//increment date by n days
        void decreaseDate( int N );//decrement date by n days
        int daysBetween( upDate D );// return number of day between this date and date D. D - this date
        int dayOfYear();
        string dayName();//reutrn monday, tuesday
        
        string getMonthName();//return name of the month
        int julian( );
        static int GetDateCount();
        upDate operator=( const upDate&obj )
        {
            //delete[] ptr;
            // ptr = new int[3];
            // ptr[0] = obj.ptr[0];
            // ptr[0] = obj.ptr[1];
            // ptr[0] = obj.ptr[2];
            this->ptr[0] = obj.ptr[0];
            this->ptr[1] = obj.ptr[1];
            this->ptr[2] = obj.ptr[2];
            return *this;
        }//to make d1 = d2 work
        
        friend upDate operator-( int num, upDate &obj  )
        {
            
            return upDate( obj.julian() - num );
        }
        
        upDate operator-( int num )
        {
            
            return upDate( (*this).julian() - num );
        }
        
        friend upDate operator+( int num, upDate &obj  )
        {
            
            return upDate( obj.julian() + num );
        }
        
        upDate operator+( int num )
        {
            return upDate( (*this).julian() + num );
        }
        
        friend int operator-( upDate &obj1, upDate &obj2 ){ 
            
            return (obj1.julian() - obj2.julian());     
        }
        
        friend ostream &operator<<( ostream &output, const upDate &up ){ 
            output<<up.ptr[0]<<"/"<< up.ptr[1]<<"/"<< up.ptr[2]<<endl;
            //return output + " / ";            
        }
        //friend ostream &operator >>( ostream &i, upDate &d );
        upDate operator++( int i )
        {
            *this = upDate( (*this).julian() + 1 );
            return *this;
        }//post incre dummy para
        
        upDate operator++()
        {
            *this = upDate( (*this).julian() + 1 );
            return *this;
        };//pre incre
        
        upDate operator--( int i )
        {
            *this = upDate( (*this).julian() - 1 );
            return *this;
        };//post decre dummy para
        upDate operator--()
        {
            *this = upDate( (*this).julian() - 1 );
            return *this;
        };//pre decr
        
        
        upDate operator+=( const int& num )
        {
            return upDate( (*this).julian() + num );
        }
        
        upDate operator-=( const int& num )
        {
            return upDate( (*this).julian() - num );
        }
        
        bool operator==( const upDate& obj )
        {
            return ( (this->ptr[0] == obj.ptr[0] ) && (this->ptr[1] == obj.ptr[1] ) && (this->ptr[1] == obj.ptr[1] ) );
        }
        
        bool operator<( const upDate& obj )
        {
            //true if less than
            int year = this->ptr[0] - obj.ptr[0];
            int month = this->ptr[1] - obj.ptr[1];
            int day = this->ptr[2] - obj.ptr[2];

            
            if ( year < 0 || ( year == 0 && month < 0 ) || ( year == 0 && month == 0 && day < 0 ))//year 
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
        bool operator>( const upDate& obj )
        {
            //true if greater than
            int year = this->ptr[0] - obj.ptr[0];
            int month = this->ptr[0] - obj.ptr[0];
            int day = this->ptr[0] - obj.ptr[0];
            
            if ( year > 0 || ( year == 0 && month > 0 ) || ( year == 0 && month == 0 && day > 0 ))//year 
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        
    
};
#endif
