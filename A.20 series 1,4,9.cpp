/* Annie Bhalla
  19HCS4009 
   B.Sc (H) Cs */
   
// Part A. (20) Print series 1,4,9,16...till n

#include<bits/stdc++.h>  //to include all header files
using namespace std;

int main()
{
	int n;
	cout<<"\n Enter the number of terms you want ";
	cin>>n;
	for(int i=1 ; i<=n ; i++ )
		cout<<i*i<<" ";
		return 0;
}
