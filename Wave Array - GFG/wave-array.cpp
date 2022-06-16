// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// #include <algorithm>


 // } Driver Code Ends
class Solution{
    public:
    
    void swap(int &a, int &b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    
    void convertToWave(int n, vector<int>& arr){
        
        for(int i = 0; i<n;i+=2){
            if(i==n-1)
                arr[i] = arr[i];
            else{
                swap(arr[i], arr[i+1]);
            }
        
        
    }
    }      
        
    
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends