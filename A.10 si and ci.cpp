/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (10) simple interest compound interest

 #include<bits/stdc++.h> // to inlcude all header files
 using namespace std;
 
 int main()
{
	float  P,R,T,S,C;
	int flag=0;
	cout<<"Enter the Principal amount: ";
	cin>>P;
	cout<<"Enter the Rate of Interest: ";
	cin>>R;
	cout<<"Enter the Time (in Years): ";
	cin>>T;
	
	if(R<0)
	{
		flag=1;
		
	}
	else
	{
		S=(P*R*T)/100;;
		cout<<"Simple Interest :"<<S;
		C=1+R/100;
		for(int q=1;q<T;q++)
		{
			C*=C;
		}
		C=P*C;
        C-=P;
		cout<<"\nCompound Interest: "<<C;
	}
	if(flag==1)
	{
		cout<<"\n Invalid ,Rate of interest is negative ,so no iterest  ";
	}
	return 0;
}
