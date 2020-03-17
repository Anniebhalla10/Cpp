/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
// Part A . (24) Reverse of a number 
#include<iostream>
using namespace std;

int main()
{
  int num,x;
  cout<<"\nEnter  a number ";
  cin>>num;
  cout<<"\nEntered number is "<<num;
  cout<<"\nReversed number is ";
  while(num%10!=0)
  {
  	x=num%10;
  	cout<<x;
  	num=num/10;
  }
  return 0;
}
