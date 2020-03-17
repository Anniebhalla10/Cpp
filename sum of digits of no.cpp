//sum of digits of a number
#include<iostream>
using namespace std;

int main()
{
	int sum,num,x;
	sum=0;
	x=0;
	cout<<"\nEnter the number";
	cin>>num;
     while(num%10!=num)
   {
	  	x=num%10;
	  	num=num/10;
	  	sum=sum+x;
    }		
	  sum=sum+num;
	  cout<<"\nSum of digits is "<<sum;
	  return 0;
}
