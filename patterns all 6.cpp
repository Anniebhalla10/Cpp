 //patterns
 #include<iostream>
 using namespace std;
 
void pattern_1();
void pattern_2();
 void pattern_3();
  void pattern_4();
   void pattern_5();
    void pattern_6();  
 
 int main()
 {
 	int n;
 	char ch;
 	do
	  {
	  	cout<<"\nTHERE ARE SIX TYPES OF PATTERNS:-";
	  	cout<<"\nCHOOSE A NUMBER FROM 1-6: ";
	  	cin>>n;
        switch (n)
         {
		case 1: pattern_1();
          	    break;
		case 2: pattern_2();
          	    break;
        case 3: pattern_3();
          	    break;
        case 4: pattern_4();
          	    break;
        case 5: pattern_5();
          	    break;
        case 6: pattern_6();
          	    break;
        default: cout<<"\nEnter a valid choice!";
        
		  }
		  cout<<"\n Do you wish to continue y/n";
		  cin>>ch;
	}while(ch=='y' || ch=='Y');
	return 0;
 }
 
 void pattern_1()
 {   
     int num;
 	 cout<<"\nEnter the number of lines you want ";
 	 cin>>num;
 	for(int i=0;i<num;i++){
 		for(int j=0;j<=i;j++)
 		    cout<<"*"<<" ";
 		    cout<<endl;
	 }
 }
 
 void pattern_2()
 {   
    int n;
    int x=1;
    cout<<"\nEnter the number of lines you want : ";
    cin>>n;
 	for(int i=0;i<n;i++){
 		for(int j=0;j<=i;j++)
 		 cout<<x++<<" ";
 		 cout<<endl;
	 } 
 	
 }
  
  
void pattern_3(){
  	int num;
  	cout<<"\nEner the number of lines you want : ";
  	cin>>num;
  	for(int i=0;i<num;i++){
  		for(int j=0;j<num;j++){
  			if(i+j>=num-1)
  			cout<<"#";
  			else
  			cout<<" ";
  			
		  }
		  cout<<endl;
	  }
  }
  
   
   void pattern_4(){ 
    int num;
  	cout<<"\nEner the number of lines you want : ";
  	cin>>num;
  	for(int i=0;i<num;i++){
  		for(int j=0;j<num;j++){
  			if(i+j<=num-1)
  			cout<<"#";
  			else
  			cout<<" ";
       }
       cout<<endl;
	}
}
	
    void pattern_5(){
    	int n;
    	cout<<"\nEnter the number of lines : ";
    	cin>>n;
    	for(int i=0;i<n;i++){
    		int x=i+1;
    		for(int j=0;j<=i;j++)
    		cout<<x--<<" ";
    		cout<<endl;
			}
		}
    	

    
     void pattern_6(){
     	cout<<" ";
	 }
