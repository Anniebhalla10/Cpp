/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (15) HCF and LCM 

 #include<bits/stdc++.h> // to inlcude all header files
 using namespace std;

int main()
{
	int x,y,a,b,c;
	cout<<"Enter first no.: ";
	cin>>a;
	cout<<"Enter second no.: ";
	cin>>b;
	c=a*b;
	x=a;
	y=b;
	
	while(a!=b)
	{
	   if(a<b)
	   {b=b-a;
	   }
	   else
	   {
	   	a=a-b;
	   }
	}
	
	cout<<"HCF of "<<x<<" and "<<y<<" is "<<a;
	cout<<"\n LCM of "<<x<<" and "<<y<<" is "<<c/a;
	return 0;
}
