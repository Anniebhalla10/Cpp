//odd one out in array
#include<iostream>
using namespace std;

void oddone(int arr[15],int n);
int main()
{
	int m[15];
	int size;
	cout<<"\nEnter the size of array ";
	cin>>size;
	cout<<"\nEnter the elements of array :"<<endl;
	for(int i=0;i<size;i++)
     cin>>m[i];
     oddone(m,size);
     return 0;
}

void oddone(int arr[15],int n)
{
     for(int i=0;i<n;i++){
     	if(arr[i+1]!=arr[i])
     	  cout<<arr[i+1];
	 }
     /*	if(arr[i]!=arr[i+1]){
     		if(arr[i+1]!=arr[i+2])
     		  {
     		  	if(arr[i]==arr[i+2])
     		  	 cout<<"\nOdd no is :"<<arr[i+1];
     		  	 break;
			   }
			else
			   cout<<"\nOdd no is :"<<arr[i];
		 }
	*/
	 
}
