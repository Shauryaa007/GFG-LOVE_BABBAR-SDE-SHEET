//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int palindrome(int n)
    {
        int temp=n;
        int N=0;
        while(temp>0)
        {
            N=N*10+(temp%10);
            temp=temp/10;
        }
        
        if(N==n)
        return 1;
        
        return 0;
    }
    
    int PalinArray(int arr[], int n)
    {
    	for(int i=0;i<n;i++)
    	{
    	    if(palindrome(arr[i])!=1)
    	    return 0;
    	}
    	
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends