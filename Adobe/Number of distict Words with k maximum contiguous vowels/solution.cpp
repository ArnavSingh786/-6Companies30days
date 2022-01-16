//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
  
  long long int t[1001][1001];
  
  long long int Solve(int N, int K, int cnt)
  {
      if(N==0)
      return 1;
      
      if(t[N][cnt]!=-1)
      return t[N][cnt];
      
      if(cnt<K)
      return t[N][cnt] = (21*Solve(N-1,K,0) + 5*Solve(N-1,K,cnt+1))%1000000007;
      
      if(cnt==K)
      return t[N][cnt] = 21*Solve(N-1,K,0)%1000000007;
  }
    int kvowelwords(int N, int K) {
        // Write Your Code here
        memset(t,-1,sizeof(t));
        return Solve(N,K,0)%1000000007;
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;int K;
        cin >>N>>K;
        
        Solution ob;
        int ans = ob.kvowelwords(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
