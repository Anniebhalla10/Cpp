/* Annie Bhalla
  19HCS4009 
   B.Sc (H) Cs */
   
// Part A. (19) Sum of n even numbers

#include<bits/stdc++.h>  //to include all header files
using namespace std;

int main()
{
	int n,ctr=1,sum=0;
	cout<<"\n Enter the number of terms you want ";
	cin>>n;
	for(int i=2 ; ctr<=n ; i+=2 )
	{
		cout<<i<<" ";
		ctr++;
		sum+=i;
	}
	cout<<"\n Sum of first "<<n<<" even numbers is : "<<sum;
	return 0;
}
