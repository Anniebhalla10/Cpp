//to return position of elemnet

#include<iostream>
using namespace std;

int pos(int A[15], int size, int a);

int main()
{
   int size;
   int ARRAY[15];
   int x;
   cout<<"\nEnter no to be found ";
   cin>>x;
   cout<<"\nEnter size of array ";
   cin>>size;
   cout<<"\nEnter elements of array : "<<endl;
   for(int i=0;i<size;i++){
   	cin>>ARRAY[i];
   }
   int position=pos(ARRAY , size , x);
   cout<<"\nElement found at "<<position+1;
   return 0;
}

int pos(int A[15], int size, int a){
	for(int j=0;j<size;j++){
		if(A[j]==a)
		return j;
	}
}
