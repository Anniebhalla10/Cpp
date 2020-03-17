//decimal to binary
#include<iostream>
using namespace std;

int main()
{
	int decimal;
	cout<<"\nEnter a decimal number ";
    cin>>decimal;
    while(decimal/2>0)
    {
    	if(decimal%2==0)
    	cout<<"1";
		else
		cout<<"0";
		decimal=decimal/2;
	}
	cout<<"0";
	return 0;
}
