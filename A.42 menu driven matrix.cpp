/* Annie Bhalla
19HCS4009
Bsc (H) Cs */

// Part A.42 Matrix menu driven

#include<bits/stdc++.h> //to include all header files
using namespace std;

int A[20][20];
int B[20][20];
int r1,c1,r2,c2;

void rowinput()
{
	cout<<"\n Enter row and column for matrix A: ";
	cin>>r1>>c1;
	cout<<"\n enter elemnts of first array row major :"<<endl;
	for(int i=0;i<r1;i++)
	 {
	 	for(int j=0;j<c1;j++)
	 	cin>>A[i][j];
	 }
	 
	 	cout<<"\n Enter row and column for matrix B: ";
	cin>>r2>>c2;
	 cout<<"\n enter elemnts of second array row major :"<<endl;
	for(int i=0;i<r2;i++)
	 {
	 	for(int j=0;j<c2;j++)
	 	cin>>B[i][j];
	 }
	
}

void colinput()
{
	cout<<"\n Enter row and col of first and second matrix :"<<endl;
	cin>>r1>>c1>>r2>>c2;
	cout<<"\n enter elemnts of first array column major :"<<endl;
	for(int i=0;i<c1;i++)
	 {
	 	for(int j=0;j<r1;j++)
	 	cin>>A[i][j];
	 }
	 
	 cout<<"\n enter elemnts of second array column major :"<<endl;
	for(int i=0;i<c2;i++)
	 {
	 	for(int j=0;j<r2;j++)
	 	cin>>B[i][j];
	 }


}

void rowout()
{
	cout<<"\n First matrix is : "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		cout<<A[i][j];
	}
	
	cout<<"\n Second matrix is : "<<endl;
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		cout<<B[i][j];
	}
}

void colout()
{
	cout<<"\n First matrix is : "<<endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		cout<<A[j][i];
	}
	
	cout<<"\n Second matrix is : "<<endl;
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		cout<<B[j][i];
	}
}

void sumele()
{
  int suma=0,sumb=0;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		suma+=A[i][j];
	}
	
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		sumb+=B[i][j];
	}
	
	cout<<"\n Sum of elements of array A is : "<<suma;
	cout<<"\n Sum of elements of array B is : "<<sumb;
}

void diagsum()
{   
    int da1=0,da2=0,db1=0,db2=0;
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
			{
				if(i==j)
				da1+=A[i][j];
		        if(i+j==(r1-1))
				da2+=A[i][j];
		 }
	}
	
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
			{
				if(i==j)
				db1+=B[i][j];
		        if(i+j==(r1-1))
				db2+=B[i][j];
		 }
	}
	
	cout<<"\n Sum of diagonals of matrix A  : "<<da1<<" and "<<da2;
	cout<<"\n Sum of diagonals of matrix B  : "<<db1<<" and "<<db2;
}


void nondiagonalsum()
{   
    int sum_A=0,sum_B=0;
		for(int p=0;p<r1;p++){
			for (int q=0;q<c1;q++){
				if(p!=q && p+q!=(r1-1))
				sum_A+=A[p][q];
			}
}
	cout<<"\n Sum of nondiagonal elements of matrix A is : "<<sum_A<<endl;
		for(int p=0;p<r2;p++){
			for (int q=0;q<c2;q++){
		
				if(p!=q && p+q!=(r2-1))
				sum_B+=B[p][q];
			}
	}
	cout<<"\n Sum of nondiagonal elements of matrix B is : "<<sum_B<<endl;

}

void sumofuppertri()
 {
	  int up_A=0;
		for(int p=0;p<r1;p++){
			for (int q=0;q<c1;q++){
				if(p+q<=r1-1)
				up_A+=A[p][q]; 
			}
		}
	cout<<"\n Sum of upper triangle of matrix A is : "<<up_A;
	
	  int up_B=0;
		for(int p=0;p<r2;p++){
			for (int q=0;q<c2;q++){
				if(p+q<=r2-1)
				up_B+=B[p][q]; 
			}
		}
	cout<<"\n Sum of upper triangle of matrix B is : "<<up_B;
}


void sumoflowertri()
{
	int low_A=0;
	for(int p=0;p<r1;p++){
		for (int q=0;q<c1;q++){
			if(p+q>=r1-1)
			low_A+=A[p][q];
		}
	}
	cout<<"\n Sum of lower triangle of matrix A is : "<<low_A;
	
	int low_B=0;
	for(int p=0;p<r2;p++){
		for (int q=0;q<c2;q++){
			if(p+q>=r2-1)
			low_B+=B[p][q];
		}
	}
	cout<<"\n Sum of lower triangle of matrix B is : "<<low_B;
}

void sumrowcol()
{
	
	cout<<"\n Sum of rows of Matrix A :"<<endl;
   for(int i=0;i<r1;i++)	
   {  
		int sum=0;
		for(int j=0;j<c1;j++){
			sum+=A[i][j];
		}
		cout<<"\n Sum of "<<i<<" row is : "<<sum;
   }
   
   cout<<endl;
   cout<<"\n Sum of rows of Matrix B :"<<endl;
   for(int i=0;i<r2;i++)	
   {  
		int summ=0;
		for(int j=0;j<c2;j++){
			summ+=A[i][j];
		}
		cout<<"\n Sum of "<<i<<" row is : "<<summ;
   }
    cout<<endl;
    cout<<"\n Sum of columns of Matrix A : "<<endl;
		for(int p=0;p<c1;p++)
		{
			int sum=0;
			for(int q=0;q<r1;q++)
			sum+=A[p][q];
			cout<<"\n Sum of "<<p<<" column is : "<<sum;
		}
	 cout<<endl;	
	 cout<<"\n Sum of columns of Matrix B : "<<endl;
		for(int p=0;p<c2;p++)
		{
			int sum=0;
			for(int q=0;q<r2;q++)
			sum+=B[p][q];
			cout<<"\n Sum of "<<p<<" column is : "<<sum;
		}   
}


void transpose()
{         

        int temp[10][10];
		for(int a=0;a<r1;a++){
		for(int b=0;b<c1;b++)
		temp[b][a]=A[a][b];
	}
	cout<<"\nTranspose of matrix A:"<<endl;
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++)
		cout<<temp[i][j]<<" ";
		cout<<endl;
    }    
	 int XYZ[10][10];
		for(int a=0;a<r2;a++){
		for(int b=0;b<c2;b++)
		XYZ[b][a]=B[a][b];
	}
	cout<<"\nTranspose of matrix B:"<<endl;
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++)
		cout<<XYZ[i][j]<<" ";
		cout<<endl;
}

}

void addition()
{
	int X[10][10];
	if(r1==r2 && c1==c2)
	{
		for(int x=0;x<r1;x++)
		 {
		 	for(int y=0;y<c1;y++)
		 	 X[x][y]= A[x][y]+B[x][y];
		 }
		 cout<<"\n Addition of two matrices is : "<<endl;
		 for(int i=0;i<r1;i++,cout<<endl)
		 {
		 	for(int j=0;j<c1;j++)
		 	cout<<X[i][j];
		 }
	}
	
	else
	 cout<<"\n Matrices cannot be added ";
}

void subtraction()
{
	int X[10][10];
	if(r1==r2 && c1==c2)
	{
		for(int x=0;x<r1;x++)
		 {
		 	for(int y=0;y<c1;y++)
		 	 X[x][y]= A[x][y]-B[x][y];
		 }
		 cout<<"\n Subtraction of two matrices is : "<<endl;
		 for(int i=0;i<r1;i++,cout<<endl)
		 {
		 	for(int j=0;j<c1;j++)
		 	cout<<X[i][j];
		 }
	}
	
	else
	 cout<<"\n Matrices cannot be subtracted ";
}


	void division()
{
	int X[10][10];
	if(r1==r2 && c1==c2)
	{
		for(int x=0;x<r1;x++)
		 {
		 	for(int y=0;y<c1;y++)
		 	{
		 		if(B[x][y]==0)
		 		 	X[x][y]=-100;
			 	else
		 	    	X[x][y]= A[x][y]/B[x][y];
		    }
		 }
		 cout<<"\n Division of two matrices is : "<<endl;
		 for(int i=0;i<r1;i++,cout<<endl)
		 {
		 	for(int j=0;j<c1;j++)
		 	cout<<X[i][j];
		 }
	}
	
	else
	 cout<<"\n Matrices cannot be added ";

}


int main()
{
	int n,inn;
	char ch;
	cout<<"\n To input matrix "
	     <<"\n 1. row major "
	     <<"\n 2. column major ";
	     cout<<"\n Enter choice :   ";
	     cin>>inn;
		switch(inn){
			case 1: rowinput();
					break;
			case 2: colinput();
					break;
		}
			 
		
		do{
			cout<<"\n MAIN MENU ";
			cout<<"\n 1. row major output "
				<<"\n 2 column major output "
				<<"\n 3. sum of all elements of 2D array "
				<<"\n 4. sum of diagonal elemenmts "
				<<"\n 5. sum of non diagonal elemnts of matrix "
				<<"\n 6. sum of upper triangle "
				<<"\n 7. sum of lower triangle "	 	    
				<<"\n 8. sum of each row and column "
				<<"\n 9. transpose "
				<<"\n 10. addition "
				<<"\n 11. subtraction "
				<<"\n 12. division "	
				<<"\n 13. to exit "<<endl;
			cout<<"\n Enter your choice :   ";
			cin>>n;
			
		switch(n){
			case 1: rowout();
					break;
			case 2: colout();
					break;
			case 3: sumele();
					break;
			case 4: diagsum();
					break;
			case 5: nondiagonalsum();
					break;
			case 6: sumofuppertri();
					break;
			case 7: sumoflowertri();
					break;
			case 8: sumrowcol();
				 	break;
			case 9: transpose();
					break;
			case 10: addition();
					break;
			case 11: subtraction();
					break;
			case 12: division();
					break;
			case 13: cout<<"\n Exiting ... ";
			         exit(0);
					break;
		default: cout<<"\n Enter a valid choice ";				
			
		}
		cout<<"\n do you wish to continue Y/N :  ";
		cin>>ch;
	 }while(ch=='Y'||ch=='y');
	 return 0;
}




