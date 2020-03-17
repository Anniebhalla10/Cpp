/* Annie Bhalla
 19HCS4009
 Bsc (H) Cs
*/


//largest of 10 numbers using array
#include<bits/stdc++.h>   //to include all header files
using namespace std;

int main()
{
	int a[10];
	cout<<"\n Enter elements in an array : "<<endl;
	for(int i=0;i<10;i++)
	cin>>a[i];
	int max=a[0];
	for(int j=0;j<10;j++)
	{
		if(a[j]>=max)
		max=a[j];
	}
	cout<<"\n largest number is : "<<max;
	return 0;
	
}


