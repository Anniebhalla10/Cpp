/* Annie Bhalla
 19HCS4009
 B.Sc  (H) Cs */
 
 
// Part B. (1) Series s= 1 - 1/(2^2) + 1/(3^3) - ...... 
 #include<bits/stdc++.h>  
 using namespace std;
 
 int main(int argc , char * argv[])
 {  
    if(argc>1)
    {   
        float s=0;
    	int x= *argv[1];
	    	for(int i=1 ; i<=x ; i++)
	 	{
	 		if(i%2==0)
	 		 s -= 1/ pow(i,i);
	 		else
	 		 s += 1/pow(i,i);
	 		
		 }
		 cout<<"\n The result of series is : "<<s;
    	
	}
	else
	{
	 	int n;
	 	float s=0;
	 	cout<<"\n Enter number of terms for the series ";
	 	cin>>n;
	 	for(int i=1 ; i<=n ; i++)
	 	{
	 		if(i%2==0)
	 		 s -= 1/ pow(i,i);
	 		else
	 		 s += 1/pow(i,i);
	 		
		 }
		 cout<<"\n The result of series is : "<<s;
	}
	 return 0;
 }
