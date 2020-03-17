//add , sub , mul of 2D
#include<iostream>
using namespace std;
void add (int M[10][10], int R[10][10] , int r, int c  );
void sub (int M[10][10], int R[10][10] , int r, int c  );
//void mul (int M[10][10], int R[10][10] , int r, int c  );

int main()
{
	int M[10][10], R[10][10];
	int r ,c ;
	cout<< "\n Enter no. of rows and column : ";
	cout<< "\n Rows : ";
	cin>>r;
	cout<< "\n Columns : ";
	cin>>c;
	cout<<"\nEmter elements of first array : "<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		cin>>M[i][j];
	}
	cout<< "\n Enter elements of second array :  "<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		cin>>R[i][j];
	}
	add(M,R,r,c);
	sub(M,R,r,c);
//	mul(M,R,r,c);
	return 0;
	
}

void add (int M[10][10], int R[10][10] , int r, int c  )
{    int X[10][10];
	for(int i =0; i<r ; i++ ){
		for ( int j= 0 ; j<c ; j++ )
		X[i][j]= M[i][j] + R[i][j];
	}
	cout<<"\n Displaying result of addition of two matrix : "<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		cout<<X[i][j]<<" ";
		cout<< endl;
	}
}

void sub (int M[10][10], int R[10][10] , int r, int c  )
{   int H[10][10];
	for(int i =0; i<r ; i++ ){
		for ( int j= 0 ; j<c ; j++ )
		H[i][j]= M[i][j]-R[i][j];
	}
	cout<<"\n Displaying result of subtraction of two matrix : "<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++)
		cout<<H[i][j]<<" ";
		cout<< endl;
	}
}

/*
void mul (int M[10][10], int R[10][10] , int r, int c  )
{
	int F[10][10];
	for(int i=0 ; i<r ; i++){
		for(int j=0 ; j<c ; j++)
		F[i][j]=0;
	}
	
	for(int i=0 ; i<r ; i++ ){
		for(int j =0 ; j<c ; j++){
			for(int a=0 ; a<r ; a++)
			{
				for(int b=0 ; b<c; b++)
				 F[i][j]+=M[a][b]*R[b][a];
			}
		}
	}
	for(int i=0 ; i<r ; i++){
		for(int j=0 ; j<c ; j++)
		cout<<F[i][j]<<" ";
		cout<<endl;
	}
}*/
