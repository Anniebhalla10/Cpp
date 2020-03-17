//merge two sorted arrays
#include<iostream>
using namespace std;

void mergesort(int a[15],int b[15],int n,int m, int &k);
int main()
{
	int size1,size2, array1[15],array2[15];
	int k=0;
	cout<<"\nEnter the size of first array :";
	cin>>size1;
	cout<<"\nEnter elements of first array in asc order :"<<endl;
	for(int i=0;i<size1;i++)
	cin>>array1[i];
	cout<<"\nEnter size of 2nd array : ";
	cin>>size2;
	cout<<"\nEnter elements of array 2 :"<<endl;
	for(int j=0;j<size2;j++)
	cin>>array2[j];
	mergesort(array1,array2,size1,size2,k);
	return 0;
}

void mergesort(int a[15],int b[15], int n , int m,int &k){
	int sarr[25];

	int i=0,j=0,l=0;
	while(i<n && j<m){
		if(a[i]<b[j])
		  sarr[k++]=a[i++];
		else
		   sarr[k++]=b[j++];
	}
	
	while(i<n)
	{
		sarr[k++]=a[i++];
	}
	while(j<m)
	{
		sarr[k++]=b[j++];
	}
	cout<<"\nMerged array is:"<<endl;
	for(int u=0;u<k;u++)
	 cout<<sarr[u]<<" ";
}
