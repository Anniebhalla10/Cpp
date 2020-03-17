/* Annie Bhalla
   19HCS4009
   B.sc (H) CS */

// Part B. (3) Number of ccurence of alphabets   
#include<bits/stdc++.h>

using namespace std;

int main(int argc , char* argv[]){
	
	char s[100];
	strcpy(s,argv[1]);
	int count,flag;
	int len = strlen(s);
	for(int i=0;i<len;i++){
		count=0,flag=0;
		for(int k=0;k<=i-1;k++){
			if(s[i] == s[k]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			for(int j=0;j<len;j++){
			if(s[i] == s[j]){
				count++;
			}
		}
		cout<<"Count Of "<<s[i]<<":"<<count<<endl;	
		}
		
	}
	
	return 0;
}
