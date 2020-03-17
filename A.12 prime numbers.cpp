/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (12) First n prime numbers

 #include<bits/stdc++.h> // to inlcude all header files
 using namespace std;
 
 int main()
 {
 	int n,x=2,ctr,numcount=0;
 	cout<<"\n Enter the number of terms you want ";
 	cin>>n;
 	for(int x=2; numcount<=n; x++)
 	{     ctr=2;
 		 for(int i=2; i<=x/2 ; i++)
 	     {
 		   if(x%i==0)
 		   ctr++;
		  }
		if(ctr==2)
		 {
		 cout<<x<<" ";
		 numcount++;
		 }
   }
   return 0;
}
