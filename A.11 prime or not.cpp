/* Annie Bhalla
  19HCS4009 
   B.Sc (H) Cs */
   
// Part A. (11) Check if a number is prime or not

#include<bits/stdc++.h>  //to include all header files
using namespace std;

int main()
{
	int n,flag=0;
	cout<<"\n Enter the number ";
	cin>>n;
	 for(int i=2 ; i<n/2 ; i++)
	 {
	 	if(n%i==0){
	 		flag=1;
	 		break;
		 }
	 }
	 if(flag==1)
	   cout<<endl<<n<<" is not a prime ";
	else
	  cout<<endl<<n<<" is a prime ";
	return 0;
}
