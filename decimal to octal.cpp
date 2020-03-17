//decimal to octal
#include<iostream>
using namespace std;

int main()
{
	int decimal,divisor,x;
	x=0;
	divisor=1;
	cout<<"\nEnter a decimal number";
	cin>>decimal;
	while(decimal)
	{
		if(divisor>decimal)
		{
			x=decimal/divisor;
			cout<<x;;
			decimal=decimal%divisor;
			divisor=1;
		}
		else
		 divisor*=8;
	
	}
	return 0;
	
}
