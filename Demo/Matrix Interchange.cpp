// { Driver Code Starts
//Initial Template for C++

#include <bits//stdc++.h>
using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    //Complete this function
    //The array arr is globally declared
    void interchange(vector<vector<int>>&arr, int r,int c)
    {
        //Your code here
      
      //Printing the modified matrix
        for(int i=0;i<r;i++)
    	   { 
    	       for(int j=0;j<c;j++)
        	    {
        	        int t = arr[i][0];
                    arr[i][0]=arr[i][c-1];
                    arr[i][c-1] = t;
        	        cout<<arr[i][j]<<" ";
        	        
        	    }
        	 cout<<endl;
    	   }
    }
};


// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    vector<vector<int>>arr(r,vector<int>(c));
	    for(int i=0;i<r;i++){
    	    for(int j=0;j<c;j++){
    	        int x;
    	        cin>>x;
    	        arr[i][j]=x;
    	    }
	    }
	    Solution ob;
	    ob.interchange(arr, r, c);
	}
	return 0;
}

  // } Driver Code Ends