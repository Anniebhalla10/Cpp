// find a,b such that a+b=k
#include<iostream>
using namespace std;

void funfun(int arr[15], int n);
int main()
{
	int size,m[15];
	cout<<"\nEnter size of array ";
	cin>>size;
	cout<<"\nEnter elements of array "<<endl;
	for(int i=0;i<size;i++)
	 cin>>m[i];
	 funfun(m,size);
	 return 0;
}

void funfun(int arr[15] , int n)
{
	int k=0;
	cout<<"\nEnter the value of k ";
	cin>>k;
	if(arr[n-1]+arr[n-2]<k)
	cout<<"\nNo pairs ";
	else
	{
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==k)
			  cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
		}
	}
}
}
