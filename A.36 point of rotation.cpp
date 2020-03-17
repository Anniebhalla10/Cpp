/* Annie Bhalla
 19HCS4009
 B.Sc (H) Cs  */
 
 // Part A. (36) Point of circular rotation
 
 #include<bits/stdc++.h> 
 using namespace std;
 

void por(int arr[15],int n);
int main()
{
	int m[15];
	int size;
	cout<<"\nEnter the size of array ";
	cin>>size;
	cout<<"\nEnter the elements of array :"<<endl;
	for(int i=0;i<size;i++)
     cin>>m[i];
     por(m,size);
     return 0;
}

void por(int arr[15],int n){
	int k=0;
	for(int j=0;j<n;j++){
		if(arr[j]>arr[j+1])
		 k=n-j-1; 
	}
	cout<<"\nPoint of rotation is : "<<k;
}
