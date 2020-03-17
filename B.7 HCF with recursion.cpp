/* Annie Bhalla
   19HCS4009
   B.sc (H) C.s */

// Part B. () HCF with recursion 
int HCF(int n1,int n2){
	
	if(n2==0){
		return n1;
	}else{
		return HCF(n2,n1%n2);
	}
}
int main(){
	int n1,n2;
	cout<<"Enter Two Numbers :-\n";
	cout<<"n1 : ";
	cin>>n1;
	cout<<"n2 : ";
	cin>>n2;
	int res = HCF(n1,n2);
	cout<<"HCF of "<<n1<<" & "<<n2<<" Is : "<<res;
	return 0;
}

