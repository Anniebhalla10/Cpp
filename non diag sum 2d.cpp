//sum of non diagonal elements
#include<iostream>
using namespace std;
int main(){
	int R[10][10];
	int r,c,sum=0;
	cout<<"\nEnter no or rows and columns: ";
	cin>>r>>c;
	//by row major
	cout<<"\nEnter elements :"<<endl;
	for(int p=0;p<r;p++){
	for (int q=0;q<c;q++){
		cin>>R[p][q];
		if(p!=q && p+q!=(r-1))
		sum+=R[p][q];
	}
	}
	cout<<"\nDisplaying matrix (row major ) :"<<endl;
	for(int p=0;p<r;p++){
	for (int q=0;q<c;q++)
	cout<<R[p][q]<<" ";
	cout<<endl;
	}
	cout<<"\nSum of non diagonal elements is : "<<sum;
	return 0;
}
