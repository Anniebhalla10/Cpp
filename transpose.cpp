//transpose of matrix
#include<iostream>
using namespace std;
int main()
{
	int M[10][10],r,c,R[10][10];
	cout<<"\nEnter rows and columns : ";
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
	     cin>>M[i][j];
	}
	cout<<"\nDisplaying original matrix : "<<endl;
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
	     cout<<M[i][j]<<" ";
	     cout<<endl;
	}
	for(int a=0;a<r;a++){
		for(int b=0;b<c;b++)
		R[b][a]=M[a][b];
	}
	cout<<"\nTranspose of matrix :"<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		cout<<R[i][j]<<" ";
		cout<<endl;
	}
}
