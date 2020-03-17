//to find out the alone one
#include<iostream>
using namespace std;

void alone(int arr[15],int n);
int main()
{
	int m[15];
	int size;
	cout<<"\nEnter the size of array ";
	cin>>size;
	cout<<"\nEnter the elements of array :"<<endl;
	for(int i=0;i<size;i++)
     cin>>m[i];
     alone(m,size);
     return 0;
}

void alone(int arr[15],int n){
	int ctrmax=2;
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j]){
				arr[i]=arr[j]=NULL;
				flag=1;
			}
		}
           if(flag==0)
			cout<<"\nNo pair number: "<<arr[i];
	}
}
