/* Annie Bhalla
19HCS4009
B.Sc. (H) CS */

// Part B. (8) class matrix
#include<iostream>
using namespace std;

class matrix
{
	int r,c;
	int Mat[10][10];
 public:
	matrix()
	{
		r=0;
		c=0;
	}
	void input();
	void sum();
	void product();
	void transpose();
}m;

int main()
{
   int n;
   char ch;
   do{
   	    cout<<"\n Main Menu "
   	    	<<"\n 1. input "
   	    	<<"\n 2. sum "
   	    	<<"\n 3. product "
   	    	<<"\n 4. transpose ";
   	    cout<<"\n enter choice ";
		cin>>n;
	switch(n)
	{
		case 1: m.input();
				break;
		case 2: m.sum();
				break;
		case 3: m.product();
				break;
		case 4: m.transpose();
		        break;
		
	   }   
	   
	   cout<<"\n Do you wish to continue ";
	   cin>>ch;
   }while(ch=='Y'||ch=='y');	
   return 0;
}

 void matrix::input(){
 	cout<<"\n Enter row and column ";
 	cin>>r>>c;
 	for(int i=0;i<r;i++)
 	{
 		for(int j=0;j<c;j++)
 			cin>>Mat[i][j];		 
	 }
 	
 }
 
 void matrix::sum(){
 	int sum=0;
 	for(int i=0; i<r; i++)
 	{
 		for(int j=0;j<c;j++)
    		sum+=Mat[i][j];
	 }
	cout<<"\n sum of all the elements is "<<sum;
 }
 
 void matrix::product(){
 	int pro=1;
 	for(int i=0; i<r;i++)
 	{
 		for(int j=0;j<c;j++)
 		pro *= Mat[i][j]; 
	 }
	 cout<<"\n product of matrix "<<pro;
 }
 
 void matrix::transpose(){
 	int trans[10][10];
 	int m=0,n=0;
 	for(int i=0;i<r;i++)
 	{
 		for( int j=0;j<c;j++)
 		trans[j][i]=Mat[i][j];
	 }
	 cout<<"\n Transpose of matrix ";
	 for(int i=0;i<c;i++)
	 {
	 	for(int j=0;j<r; j++)
	 	cout<<trans[i][j]<<" ";
	 	cout<<endl;
	 }
 }
 
