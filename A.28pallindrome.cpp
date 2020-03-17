/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
// Part A. (28) to check whether a number is a pallindrome or not
#include<iostream>
using namespace std;

int main()
{
	int number,reverse,digit,originalnum;
	reverse=0;
	cout<<"\nEnter a number ";
	cin>>originalnum;
	number=originalnum;
	while(number!=0)
	{
		digit=number%10;
		number=number/10;	
		reverse=reverse*10+digit;
	}
	if(originalnum==reverse)
		cout<<"\nPallindrome ";
	else
		cout<<"\nNot a pallindrome ";
	return 0;
}
