/* Annie Bhalla
 19HCS4009
 Bsc (H) Cs
*/

//Check if a number is a factorial or not
#include<bits/stdc++.h> //to include all header files
using namespace std;

int fact(int);
int main()
{
	int num,n,flag=0;
	cout<<"\n Enter a number to check : ";
	cin>>num;
	for(int i=1;n<num ;i++)
	{
	     n =fact(i);
	    if(n==num)
	    {
		   cout<<"\n Yes it is a factorial ";
		   flag=1;
		   break;
	       
	   }
	   
}
	if(flag!=1)
	cout<<"\n Not a factorial ";
	return 0;
}

int fact(int x)
{
	int m=1;
    for(int h=x; h>=1; h--)
    m=m*h;
    return m;
}
