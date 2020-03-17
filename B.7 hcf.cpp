/* Annie Bhalla
   19HCS4009
   B.sc (H) C.s */
   
// Part B. (7) HCF of two numbers

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,min=0,hcf=0;
	cout<<"\n Enter any two numbers : ";
	cin>>a>>b;
	if(a<b)
		min=a;
	else
		min=b;
	if(min%a==0 && min%b==0) 
	 hcf=min;
	else
	 hcf=a*b;
	 cout<<"\n HCF of "<<a<<" and "<<b<<" is "<<hcf;
	 return 0;
	
}
