/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
// Part A . (24) sum of first and last digit of a number
#include<iostream>
using namespace std;

int main()
{
	int num,first,last,sum,x;
	first=0;
	last=0;
	sum=0;
	cout<<"\nEnter the number";
	cin>>num;
	first=num%10;
	if(num%10!=num)
  {
  	x=num%10;
  	num=num-x;
  	num=num/10;
  }

    else
	
    	last=num;
    
	sum=last+first;
	cout<<"\nSum is "<<sum;
	return 0;
}
