/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (13) To determine if a number is a square or not

 #include<bits/stdc++.h> // to inlcude all header files
 using namespace std;
 
 int main()
 {
 	int num,factors=1;
 	cout<<"\n Enter a number ";
 	cin>>num;
 	for(int i=2; i<=num ;i++ )
 	 {
 	 	if(num%i==0)
 	 	factors++;
	  }
	if(factors%2!=0)
	  cout<<endl<<num<<" is a perfect square ";
	else
	  cout<<endl<<num<<" is not a perfect square ";
	return 0;
 }
