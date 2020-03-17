/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (22) sum of cubes of first n natural numbers

 #include<bits/stdc++.h> // to inlcude all header files
 using namespace std;
 
 int main()
 {
 	int n,sum;
 	sum=0;
 	cout<<"\n Enter the number  : ";
 	cin>>n;
 	for(int i=1; i<=n ; i++ )
 	 {
 	   cout<<i*i*i<<" ";	
	   sum += (i*i*i) ;
     }
 	 cout<<"\n Sum of squares of first  "<<n<<" natural numbers is : "<<sum;
 	 return 0;
 }
