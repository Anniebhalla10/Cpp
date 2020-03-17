//reverse character array
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[10]={"HELLO"};
	for(int j= strlen(str); j>=0 ; j--)
	cout<<str[j];
	return 0;
}
