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

//Naive solution - brute force
// Time complexity - O(N^2)

// void solve(ll int arr[],ll int n){
//     forn(i,n){
//         ll int span=1;
//         for(ll int j=i-1;j>=0 && arr[j]<=arr[i];j--){
//             span++;
//         }
//         cout<<span<<" ";
//     }
// }

//Optimised solution - using stack
//Time complexity - O(N) (on an average)
//Space Complexity - O(N)

void solve(ll int arr[],ll int n){
    stack<long long int> s;
    s.push(0);
    cout<<1<<" ";
    f(i,1,n-1){
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            s.pop();
        }
        ll int span=s.empty()?i+1:i-s.top();
        cout<<span<<" ";
        s.push(i);
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
    //long long int t;
    // cin>>t;
    // while(t--){
        solve(arr,n);
    //}
return 0;
}