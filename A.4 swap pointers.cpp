/* Annie Bhalla
   19HCS4009 
   B.Sc (H) Cs */
    
    
// Part A. (4) Swapping using pointers
 
 #include<iostream> 
 using namespace std;
 
 int main()
 {
 	int a,b;
 	cout<<"\n Enter two numbers : ";
 	cin>>a>>b;
 	cout<<"\n Original value of a is : "<<a;
 	cout<<"\n Original value of b is : "<<b;
 	int *p=&a;
 	int *q=&b;
 	int temp;
 	temp=*p;
 	*p=*q;
 	*q=temp;
 	cout<<endl;
 	cout<<"\n After swapping  ";
 	cout<<"\n A is : "<<a;
 	cout<<"\n B is : "<<b;
 	return 0;
 }
