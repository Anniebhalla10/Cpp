/* Annie Bhalla
  19HCS4009 
   B.Sc (H) Cs */
   
// Part A. (16)Factorial of a number

#include<bits/stdc++.h>  //to include all header files
using namespace std;

int main()
{
	int n,fact=1;
	cout<<"\n Enter the number ";
	cin>>n;
	for(int i=n ; i>0 ; i-- )
	    fact *= i;
	cout<<"\n Factorial of "<<n<<" is : "<<fact;
	return 0;
}
