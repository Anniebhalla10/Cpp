//find i such that a[i]==i
#include<iostream>
using namespace std;

void index(int arr[15],int n);
int main()
{
	int size,m[15];
	cout<<"\nEnter size of array ";
	cin>>size;
	cout<<"\nEnter elements of array "<<endl;
	for(int i=0;i<size;i++)
	 cin>>m[i];
	 index(m,size);
	 return 0;
}

void index(int arr[15],int n)
{
	for(int i=0;i<n;i++){
			if(arr[i]==i)
				cout<<i<<" ";
	}

}
