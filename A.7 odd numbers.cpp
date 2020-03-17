/* Annie Bhalla
  19HCS4009 
   B.Sc (H) Cs */
   
// Part A. (7) Print n odd numbers

#include<bits/stdc++.h>  //to include all header files
using namespace std;

int main()
{
	int n,ctr=1;
	cout<<"\n Enter the number of terms you want ";
	cin>>n;
	for(int i=1 ; ctr<=n ; i+=2 )
	{
		cout<<i<<" ";
		ctr++;
	}
	return 0;
}
