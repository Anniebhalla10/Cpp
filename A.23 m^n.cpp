/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (23) Calculate m raise to n (m^n)

 #include<bits/stdc++.h> // to inlcude all header files
 using namespace std;
 
 int main()
 {
 	int n,m;
 	float ans=1;
 	cout<<"\n Enter m and n  : ";
 	cin>>m>>n;;
 	for(int i=1; i<=abs(n); i++)
 	   ans *= m ;
 	
 	if(n==0)
 	 cout<<"1";
 	if(n<0)
 	   cout<<"1 / "<<ans;
	if(n>0)
	   cout<<ans;
		

   return 0;
 }
