
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
 
    int const CHAR = 256;
    int fact(int n)
    {
        if(n==0||n==1)
         return 1;
         
        else
        return n*fact(n-1);
    }
    
    int rank(string str){
       int res = 1; 
    int n=str.length();
    int mul= fact(n);
    int count[CHAR]={0};
    for(int i=0;i<n;i++)
    {
        count[str[i]]++;
        if(count[str[i]]>1)
         return 0;
    }
        
    for(int i=1;i<CHAR;i++)
        count[i]+=count[i-1];
    for(int i=0;i<n-1;i++){
        mul=mul/(n-i);
        res=(res+count[str[i]-1]*mul);
        for(int j=str[i];j<CHAR;j++)
            count[j]--;
    }
    
    res=res%1000003;
    return res; 
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.rank(S)<<endl;
    }
    return 0;
}
// } Driver Code Ends