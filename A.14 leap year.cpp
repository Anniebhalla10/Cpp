/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
   
// Part A. (14) leap year
#include<iostream>
using namespace std;

int main()
{
	int year;
	cout<<"\nEnter a year";
	cin>>year;
	if(year%400==0)
	   cout<<"\nLeap Year";
	else  if(year%100==0)
	  cout<<"\nNot a leap year";
	else  if(year%4==0)
	   cout<<"\nLeap year";
	else
	   cout<<"\nNot a leap year";
	return 0;
	    
	     
}
