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
void solve(ll int arr[],ll int n,ll int k){
    priority_queue<int> maxh;
    f(i,0,n-1){
        maxh.push(arr[i]);
        if(maxh.size()>k){
            maxh.pop();
        }
    }
    cout<<maxh.top()<<"\n";
}
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n;
    cin>>n;
    ll int k;
    cin>>k;
    ll int arr[n];
    inarr(arr,n)

    // long long int t;
    // cin>>t;
    // while(t--){
        solve(arr,n,k);
    //}
return 0;
}