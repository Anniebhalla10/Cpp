/* Annie Bhalla
   19HCS4009
   B.Sc (H) Cs  */
   
// Part B. (11) exception for p/q if q=0

#include<bits/stdc++.h>   // to include all header files
using namespace std;

int main()
{
	int p,q;
	cout<<" Enter value of p and q : "<<endl;
	cin>>p>>q;
	try
	{
		if(q==0)
		 throw " Not applicable ";
		else
		 cout<<" The result is : "<<p/q<<endl;
	}
	
	catch( const char *str)
	{
		cout<<str<<endl;
	}
	
	return 0;
}
