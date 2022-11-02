#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void rearrange(long long *arr, int n) 
    { 
        int M=arr[n-1]+1;
        int max=n-1;
        int min=0;
    	
    	for(int i=0;i<n;i++){
    	    if(i%2==0){
    	        arr[i]=arr[i]+((arr[max]%M)*M);
    	        max--;
    	    }
    	    else{
    	         arr[i]=arr[i]+((arr[min]%M)*M);
    	         min++;
    	    }
    	    arr[i]=arr[i]/M;
    	}
    }
};

int main() 
{
    int t;
    

    cin >> t;
    
    while(t--){
        
        int n;
        cin >> n;
        
        long long arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        ob.rearrange(arr, n);
        
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

// } Driver Code Ends
