/*
Homework 1: Length of 3n+1
? Implement 3n+1 function to compute the length of the sequence
? int length_3n_plus_1(int n)
? E.g. length_3n_plus_1(6) ? 9
 */



#include <bits/stdc++.h>
#define loop(i, n) for(ll i = 0; i < n; i++)
#define Loop(i, n) for(ll i = 1; i < n; i++)
#define ll long long
#define endl "\n"
#define fillArray(n, arr) ll arr[n]; for(ll i = 0; i < n; i++) cin >> arr[i]
#define fillVector(n, arr) vector<ll> arr(n); loop(i, n) cin >> arr[i];
#define speed cin.tie(0); cin.sync_with_stdio(0)
#define all(v)    v.begin(),v.end()
#define test int t; cin >> t; while(t--)
const long double PI = 3.141592653589793238462643383279;
#define sz(x)              (int)x.size()
#define el                 '\n'
#define int ll
using namespace std;

void init() {
    cin.tie(0);

}



int len(int n){
    if (n == 1) return 1;
    if (n%2) return 1 + len(3*n+1);
    else if (n%2==0) return 1+ len(n/2);

}






signed main() {
    init();
    int n;
    cin>>n;
cout<< len(n);





}

