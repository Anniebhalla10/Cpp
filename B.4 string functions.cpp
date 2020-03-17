/* Annie Bhalla 
   19HCS4009
   B.Sc (H) Cs */
   

//  Part B. (4) Menu driven program of operations on string without using the inbuilt library functions of strings   

#include<bits/stdc++.h> //to include all header files
using namespace std;

void reverse();
void convertupper();
void length();
void compare();
void concatenate();
int len(char str[100]);
void address();

int main()
{
	int choice;
	char ch;
	cout<<endl;
 do
 {  cout<<endl;
	cout<<"  1 TO REVERSE THE STRING "<<endl;
	cout<<"  2 TO CONVERT STRING IN UPPER CASE "<<endl;
	cout<<"  3 TO CHECK THE LENGTH OF STRING "<<endl;
	cout<<"  4 TO COMPARE TWO STRINGS "<<endl;
	cout<<"  5 TO CONCATENATE TWO STRINGS "<<endl;
	cout<<"  6 TO PRINT ADDRESS OF  STRING "<<endl;
	cout<<"Enter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1: reverse();
				break;
		case 2:	convertupper();
				break;
		case 3: length();
				break;
		case 4:	compare();
				break;
		case 5: concatenate();
				break;
		case 6:	address();
				break;
	  }
   cout<<"Do you want to continue(Y/N) : ";
   cin>>ch;
 } while(ch=='Y' || ch=='y');
	return 0;
}
int len(char str[100])
{
	int i;
	for(i=0;str[i]!='\0';++i);
	return i;
}
void reverse()
{
	char str[100],temp;
	int size;
	cout<<" enter your string : ";
	cin>>str;
	size=len(str);
	for(int i=0,j=size-1;i<size/2;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;	
	}
	cout<<" Reverse of string is : "<<str<<endl;;
}
void convertupper()
{
	char str[100];
	int size;
	cout<<" Enter String : ";
	cin>>str;
	cout<<endl;
	size=len(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(islower(str[i]))
		{
			str[i]=toupper(str[i]);
		}
	}
	cout<<" String after converting into uppercase : "<<str<<endl;
}
void length()
{
	char str[100];
	int size;
	cout<<" Enter String : ";
	cin>>str;
	cout<<endl;
	size=len(str);
	cout<<" Length of string : "<<size<<endl;
}


void compare()
{
	char str[100],mtr[100];
	int size,check=1;
	cout<<" ENTER 1ST STRING : ";
	cin>>str;
	cout<<" ENTER 2ND STRING : ";
	cin>>mtr;
	if(len(str)!=len(mtr))
	cout<<" They are not equal string ";
	else
	{
		for(int i=0;i!='\0';i++)
		{
			if(str[i]!=mtr[i])
			{
				check=0;
				break;
			}
			
		}
		if(check==0)
		cout<<" NOT EQUAL STRINGS "<<endl;
		else
		cout<<"  EQUAL STRINGS "<<endl;
	}
}

void concatenate()
{
	char str[100],mtr[100],atr[100];
	int size,j=0;
	cout<<" ENTER 1ST STRING : ";
	cin>>str;
	cout<<" ENTER 2ND STRING : ";
	cin>>mtr;
	for(int i=0;str[i]!='\0';i++)
	{
		atr[j++]=str[i];
	}
	for(int i=0;mtr[i]!='\0';i++)
	{
		atr[j++]=mtr[i];
	}
	cout<<" STRINGS AFTER CONCATENATION : ";
	for(int i=0;i<j;i++)
	{
		cout<<atr[i];
	}
	cout<<endl;
}
void address()
{
	char str[100];
	char *p= str;
	cout<<" ENTER A STRING : ";
	cin>>str;
	cout<<endl;
	for(int i=0;str[i]!='\0';i++,p++)
		cout<<str[i]<<" at position "<<p<<endl;
		
	
}




