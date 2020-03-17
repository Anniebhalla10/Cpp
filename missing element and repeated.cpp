//find missing element
#include<iostream>
using namespace std;

void missing(int arr[15],int n);
int main()
{
	int size,m[15];
	cout<<"\nEnter size of array ";
	cin>>size;
	cout<<"\nEnter elements of array "<<endl;
	for(int i=0;i<size;i++)
	 cin>>m[i];
	 missing(m,size);
	 return 0;
}

void missing(int arr[15], int n)
{    int flag,ctr;
	int max=0;
	max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	for(int j=max;j>0;j--){
		flag=0;
		ctr=0;
		for(int k=0;k<n;k++){
			if(arr[k]==j){
			ctr++;
			flag=1;}
		}
		if(ctr==2)
		cout<<" Repeated element is "<<j<<endl;
		if(flag==0)
		{
		cout<<j<<" is the missing number ";
		}
	}
}
