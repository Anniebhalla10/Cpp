/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (6) sum to n natural numbers

 #include<bits/stdc++.h> // to inlcude all header files
 using namespace std;
 
 int main()
 {
 	int n,sum;
 	sum=0;
 	cout<<"\n Enter the number till which you want the sum : ";
 	cin>>n;
 	for(int i=1; i<=n ; i++ )
 	 sum += i;
 	 
 	 cout<<"\n Sum to "<<n<<" natural numbers is : "<<sum;
 	 return 0;
 }
