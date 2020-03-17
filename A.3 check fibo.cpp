/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (3) Check if a number is a part of fibo

#include<iostream>
using namespace std;

int main()
{
	int num,t1,t2,t3,flag=0;
	cout<<"\n Enter a  number to check : ";
	cin>>num;
	t1=0;
	t2=1;
	while(flag==0)
	{   
	    if(num==0 || num==1)
	      {
	      	cout<<"\n YES ";
	      	flag=1;
	      	break;
		  }
		t3=t1+t2;
		if(num==t3)
		  {
			   cout<<"\n Yes ";
			   flag=1;
			   break;
	      }
		
		 t1=t2;
		 t2=t3;
		 if(num<t3)
		 break;
}
	if(flag==0)
	cout<<"\n Not a part of fibonacci";
	return 0;
}
