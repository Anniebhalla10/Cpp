//to find max and min element with index
#include<iostream>
using namespace std;

void maxmin( int arr[15], int n );
int main()
{
	int size,m[15];
	cout<<"\nEnter size of array ";
	cin>>size;
	cout<<"\nEnter elements of array "<<endl;
	for(int i=0;i<size;i++)
	 cin>>m[i];
	 maxmin(m,size);
	 return 0;
}

void maxmin(int arr[15],int n)
{
	int max=arr[0];
	int min=arr[0];
	int maxindex=0,minindex=0;
	for(int j=1;j<n;j++){
		if(arr[j]>max){
		 max=arr[j];
		 maxindex=j;
	   }
	   if(arr[j]<min){
	   	min=arr[j];
	   	minindex=j;
	   }
	   
  } 
  cout<<"\MAX element is "<<max<<" at index "<<maxindex;
  cout<<"\nMin element is "<<min<<" at index "<<minindex;
}

