// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    
    string decodedString(string s , int &n){
        string result;
        while(n < s.length() && s[n] != ']'){
            if(isdigit(s[n])){
                int k = 0;
                while(n < s.length() && isdigit(s[n]))
                    k = k*10 + s[n++] - '0';
                n++;
                string r = decodedString(s, n);
                while(k-- > 0)
                    result += r;
                n++;
            } 
            else
                result += s[n++];
        }
        return result;
    }
    
public:
    string decodedString(string s){
        int n = 0;
        return decodedString(s, n);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends