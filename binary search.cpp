//binary search
#include<iostream>
using namespace std;

int main()
{
	int s,m,e, a[10];
	int size,n;
	int flag=0;
	cout<<"\n Enter size of array :";
	cin>>size;
	cout<<"\n enter elements :"<<endl;
	for(int i=0 ; i<size ; i++)
	cin>>a[i];
	cout<<endl<<"\n Enter the no to find :";
	cin>>n;
	s=0;
	e=size-1;
	m= s+e /2;
	while( s<=e && flag==0)
	{
		if(a[m]==n)
		 {
		 	flag=1;
		 	cout<<"\n Found at position :"<<m+1;
		 }
		if(n>a[m])
			s=m+1;
		if(n<a[m])
		    e=m-1;
		    
		m= s+e /2;
	}
	if(flag==0)
	cout<<"\n Not found ! ";
	return 0;
}
