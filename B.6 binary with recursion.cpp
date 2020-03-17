/* Annie Bhalla
   19HCS4009
   B.sc (H) C.s */

// Part B.  binary search with recursion

using namespace std;
int binarySearch(int arr[], int l, int r, int x) 
{ 
	while (l<=r) { 
		int m=(l + r)/2; 
		if (arr[m]==x) 
			return m; 
		
		if (arr[m]<x) 
			l = m + 1; 
		
		else
			r = m - 1; 
	} 
	return -1; 
} 

int main(void) 
{ 
	int arr[] = { 1,2, 3, 4, 8, 12,14,50}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int x ;
	cout<<"Enter A Number To Search : " ;
	cin>>x;
	int result = binarySearch(arr, 0, n - 1, x); 
	if(result==-1){
		cout<<x<<" Is Not Present In Array:";
	}else{
		cout<<x<<" Is Present At Index: "<<result;
	}
	 
	return 0; 
} 

