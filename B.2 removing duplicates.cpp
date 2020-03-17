/* Annie Bhalla
 19HCS4009
 B.Sc  (H) Cs */
 
 
// Part B. (2) To remove duplicates from an array
 #include<bits/stdc++.h>  
 using namespace std;
 
 int main()
 { 
 	int size,A[10],flag;
 	cout<<"\n Enter size of array : ";
 	cin>>size;
 	for(int i =1 ; i<=size ;i++)
 	cin>>A[i];
 	
 	// removing duplicates
 	 for(int i=size;i>=1;i--,flag=0)
    {   
        
    	int temp=A[i];
    	for(int j=i-1;j>=0;j--)
    	{
    		if(A[j]==temp)
    		{
			flag=1;
    		break; }
		}
		
		if(flag==1)
		{
			for(int m= i ; m<=size ; m++)
		       A[m]=A[m+1];
			   size--;
		}
		
 }
 
  cout<<"\n After removing duplicates : ";
  for(int k=1;k<=size;k++)
   cout<<endl<<A[k]<<" ";
   return 0;
}
