/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (2) Fibo till n
 #include<iostream>
 using namespace std;
 
 int main()
 {
 	int n,t1,t2,t3;
 	t1=0;
 	t2=1;
 	cout<<"\n Enter the number of terms you want in series : ";
 	cin>>n;
 	cout<<"\n Fibonacci series is :"<<endl;
 	if(n==1)
 	  cout<<t1<<" ";
 	else if(n==2)
 	  cout<<t1<<" "<<t2;
 	else
 	    {   cout<<t1<<" "<<t2<<" ";
 	    	for(int i=2;i<n;i++)
 	    	{
 	    		t3=t1+t2;
 	    		cout<<t3<<" ";
 	    		t1=t2;
 	    		t2=t3;
			 }
		 }
		return 0;
 }
