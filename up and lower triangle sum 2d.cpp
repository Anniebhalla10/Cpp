//sum of upper triangle and lower triangle
#include<iostream>
using namespace std;
int main(){
	int M[10][10],R[10][10];
	int r,c,up=0,low=0;
	cout<<"\nEnter no or rows and columns: ";
	cin>>r>>c;
	//by row major
	cout<<"\nEnter elements :"<<endl;
	for(int p=0;p<r;p++){
	for (int q=0;q<c;q++){
		cin>>R[p][q];
		if(p+q<=r-1)
		up+=R[p][q];
		if(p+q>=r-1)
		low+=R[p][q];
	}
	}
	cout<<"\nDisplaying matrix (row major ) :"<<endl;
	for(int p=0;p<r;p++){
	for (int q=0;q<c;q++)
	cout<<R[p][q]<<" ";
	cout<<endl;
	}
	cout<<"\nSum of upper triangle : "<<up;
	cout<<"\nSum of lower triangle : "<<low;
	return 0;
}
