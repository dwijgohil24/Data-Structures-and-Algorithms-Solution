/*REST IN THE END NOT IN THE MIDDLE.*/
 
#include <bits/stdc++.h>
using namespace std;
/* Template Starts*/
#define ll long long
#define ull unsigned long long
#define f(i, x, y) for (ll i = x; i <= y; i++)
#define rf(i, x, y) for (ll i = x; i >= y; i--)
#define forn(i, n) for (ll i = 0; i < n; i++)
#define inarr(A,n) forn(i,n) cin>>A[i];
#define pub push_back
#define pob pop_back
 
/*Customised STL containers*/
typedef vector<ll int> vll;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef stack<ll int> stkll;
typedef stack<int> stkint;
 
/*CODE STARTS FROM HERE.*/
void solve(ll int arr[],ll int n){
    stkll s;
    vll ans;
    s.push(arr[n-1]);
    ans.pub(-1);
    rf(i,n-2,0){
        while(s.empty()==false && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()==true){
            ans.pub(-1);
            s.push(arr[i]);
        }
        else{
            ans.pub(s.top());
            s.push(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
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