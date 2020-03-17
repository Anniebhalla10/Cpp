//mean median mode
#include<iostream>
using namespace std;
void mmm(int arr[15],int n);

int main()
{
	int size,m[15];
	cout<<"\nEnter size of array ";
	cin>>size;
	cout<<"\nEnter elements of array "<<endl;
	for(int i=0;i<size;i++)
	 cin>>m[i];
	 mmm(m,size);
	 return 0;
}

void mmm(int arr[15], int n){
	int median=0,temp;
	float mean=0;
	for(int k=0;k<n;k++)
		mean+=arr[k];
		mean=mean/n;
	
		for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		
		if(n%2!=0)
		 median=arr[n/2];
		 else
		   median = arr[n/2 +1];
		cout<<"\nMean is "<<mean;
		cout<<"\nMeidan is "<<median;
	
}
