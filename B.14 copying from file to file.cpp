/* Annie Bhalla
   19HCS4009
   B.Sc (H) Cs */
#include<iostream>
#include<fstream>
#include<ctype.h>
#include<conio.h>

using namespace std;
int main(){
	char ch;
	fstream f1,f2;
	f1.open("space.txt");
	f2.open("spaceless.txt");
	while(!f1.eof()){
		f1.get(ch);
		if(ch!=' '){
            f2.put(ch);
		}
	}
	f1.close();
	f2.close();
}
