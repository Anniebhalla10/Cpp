// to check if a string is a pallindrome or not
#include<iostream>
#include<string.h>
using namespace std;

int main()
{   int j;
	char str[10],temp[10];
	cout<<"\nEnter a string :";
	gets(str);
	for(int i= strlen(str),j=0;i>=0;i--,j++)
	 {
       strcpy(temp[j],str[i]);
	  
} 
	if(strcmp(str,temp)==0)
	cout<<"\n Yes it is a pallindrome ";
	else
	cout<<"\n Not A pallin ";
	return 0;
}
