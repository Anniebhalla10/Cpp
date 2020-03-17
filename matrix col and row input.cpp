// input a matrix col major and row major
#include<iostream>
using namespace std;
int main(){
	int M[10][10],R[10][10];
	int r,c;
	cout<<"\nEnter no or rows and columns: ";
	cin>>r>>c;
	// by column major
	cout<<"\nEnter elements for first matrix : "<<endl;
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++)
		cin>>M[i][j];
	}
	cout<<"\nDisplaying matrix (col major):"<<endl;
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		cout<<M[j][i]<<" ";
		cout<<endl;
	}
	//by row major
	cout<<"\nEnter elements :"<<endl;
	for(int p=0;p<r;p++){
	for (int q=0;q<c;q++)
	cin>>R[p][q];
	}
	cout<<"\nDisplaying matrix (row major ) :"<<endl;
	for(int p=0;p<r;p++){
	for (int q=0;q<c;q++)
	cout<<R[p][q]<<" ";
	cout<<endl;
	}
	
}
