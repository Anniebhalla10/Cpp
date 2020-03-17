/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */

//Part A. (25) binary to decimal 
#include<iostream>
using namespace std;

int main()
{
	int binary,digit,decimal,base;
	decimal=0;
	base=1;
	digit=0;
	cout<<"\nEnter the binary number ";
	cin>>binary;
	digit=binary%10;
	binary=binary/10;
	decimal+=digit*1;
	while(binary)
	{
	digit=binary%10;
	binary=binary/10;
	base*=2;
	decimal=decimal+ (digit*base);
	}
	cout<<"\nDecimal number is "<<decimal;
	return 0;
}
