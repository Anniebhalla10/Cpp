//sum of diagonal elemets
#include<iostream>
using namespace std;
int main(){
	int R[10][10];
	int r,c,d1=0;
	int d2=0;
	cout<<"\nEnter no. of rows and col : ";
	cin>>r>>c;
	//by row major
	
	cout<<"\nEnter elements :"<<endl;
	for(int p=0;p<r;p++){
	for (int q=0;q<c;q++){
		cin>>R[p][q];
		if(p==q)
		 d1+=R[p][q];
         if(p+q==(r-1))
		d2+=R[p][q];
	}
	}
	cout<<"\nDisplaying matrix (row major ) :"<<endl;
	for(int p=0;p<r;p++){
	for (int q=0;q<c;q++)
	cout<<R[p][q]<<" ";
	cout<<endl;
	}
	cout<<"\nSum of main diagonal : "<<d1;
	cout<<"\nSum of another diagonal : "<<d2;
	return 0;
}
