/* Annie Bhalla
19HCS4009
B.sc (H) Cs */

// Part A. (40) Duplicate and unique

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int A[10],size,flag=0,ctr;
	cout<<"\n Enter size of array ";
	cin>>size;
	cout<<"\n Enter elements ";
	for(int i=0;i<size;i++)
      cin>>A[i];
     
    cout<<"\n Duplicates ";
    
    for(int i=0;i<size;i++)
    {   
        ctr=0;
    	int temp=A[i];
    	for(int j=i-1;j>=0;j--)
    	{
    		if(A[j]==temp)
    		{
			flag=1;
    		break; }
		}
		if(flag==0)
		 {
		 	for(int k=0;k<size ;k++)
		 	 {
		 	 	if(A[k]==temp)
		 	 	ctr++;
			  }
		 
		 if(ctr>1)
		  cout<<temp<<"  ";
     	}
    else
        flag=0;
	}
	
	cout<<"\n Unique elements are :";
	    for(int i=0;i<size;i++)
    {   
        ctr=0;
    	int temp=A[i];
    	for(int j=i-1;j>=0;j--)
    	{
    		if(A[j]==temp)
    		{
			flag=1;
    		break; }
		}
		if(flag==0)
		 {
		 	for(int k=0;k<size ;k++)
		 	 {
		 	 	if(A[k]==temp)
		 	 	ctr++;
			  }
		 
		 if(ctr>=1)
		  cout<<temp<<"  ";
     	}
    else
        flag=0;
	}

		
	return 0;
}

