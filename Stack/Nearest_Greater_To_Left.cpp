//REST IN THE END NOT IN THE MIDDLE
#define ll long long
#define ull unsigned long long
#define f(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x; i >= y; i--)
#define forn(i, n) for (ll i = 0; i < n; i++)
#define inarr(A,n) forn(i,n) cin>>A[i];
//CODE STARTS FROM HERE.
#include <bits/stdc++.h>
using namespace std;
void solve(ll int arr[],ll int n){
    stack<ll int>s;
    vector<ll int>ans;
    s.push(arr[0]);
    ans.push_back(-1);
    f(i,1,n-1){
        while(s.empty()==false && s.top()<=arr[i]){
            s.pop();
        }
        if(s.empty()==true){
            ans.push_back(-1);
            s.push(arr[i]);
        }
        else{
            ans.push_back(s.top());
            s.push(arr[i]);
        }
    }
    f(i,0,ans.size()-1){
        cout<<ans[i]<<" ";
    }
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n;
    cin>>n;
    ll int arr[n];
    inarr(arr,n)
    // long long int t;
    // cin>>t;
    // while(t--){
        solve(arr,n);
    //}
return 0;
}