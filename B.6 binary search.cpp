/* Annie Bhalla
 19HCS4009
  B.Sc (H) Cs */
  
// Part B. (6.2) binary search without recursion
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int start,middle,end, a[10];
	int size,value;
	int flag=0;
	cout<<"\n Enter size of array :";
	cin>>size;
	cout<<"\n enter elements :"<<endl;
	for(int i=0 ; i<size ; i++)
	cin>>a[i];
	cout<<endl<<"\n Enter the no to find :";
	cin>>value;
	start=0;
	end=size-1;
	middle= start+end /2;
	while( start<=end && flag==0)
	{
		if(a[middle]==value)
		 {
		 	flag=1;
		 	cout<<"\n Found at position :"<<m+1;
		 }
		if(value>a[middle])
			start=middle+1;
		if(value<a[middle])
		    end=middle-1;
		    
		middle= start+end /2;
	}
	if(flag==0)
	cout<<"\n Not found ! ";
	return 0;
}
