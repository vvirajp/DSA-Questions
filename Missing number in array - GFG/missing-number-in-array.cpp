// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int hash[n+1];
        for(int i=0;i<n+1;i++){
            hash[i] = 0;
        }
        for(int j=0;j<n-1;j++){
            hash[array[j]]++;
        }
        for(int k=1;k<n+1;k++){
        if(hash[k] == 0)
            return k;
    }
    
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  // } Driver Code Ends