####################################################################################  Question  ###################################################################################################################################################

Given a binary representation in the form of a string(s) of a number n, the task is to find a binary representation of n+1.

Note: Output binary string should not contain leading zeros.

Example 1:

Input: s = "10"
Output: 11
Explanation: "10" is the binary representation of 2 and binary representation of 3 is "11"
Example 2:

Input: s = "111"
Output: 1000
Explanation: "111" is the binary representation of 7 and binary representation of 8 is "1000"
Your Task:  
You don't need to read input or print anything. Complete the function binaryNextNumber()which takes s as input parameter and returns the string.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n) to store resultant string  

Constraints:
1 <= n <= 105







#######################################################################################  Solution  ################################################################################################################################################

  //{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long dec(string s){
        long long ans=0;
        long long p=1;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1'){
                ans=p+ans;
                
            }
            p*=2;
        }
        return ans;
    }
    
    string bin(long long n){
        string ans="";
        
        while(n>0){
            if(n%2==0){
                ans='0'+ans;
            }else{
                ans='1'+ans;
            }
            n/=2;
        }
        return ans;
    }
    string binaryNextNumber(string s) {
       long long ans=dec(s);
      
       ans=ans+1;
     
      return bin(ans);
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends
