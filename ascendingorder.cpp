//ascending order
#include<iostream>
using namespace std;

void ascorder( int arr[15], int n);
int main()
{
	int size,m[15];
	cout<<"\nEnter size of array ";
	cin>>size;
	cout<<"\nEnter elements of array "<<endl;
	for(int i=0;i<size;i++)
	 cin>>m[i];
	 ascorder(m,size);
	 return 0;
}

void ascorder(int arr[15], int n)
{     int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nSorted array"<<endl;
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";
		
	}
}
