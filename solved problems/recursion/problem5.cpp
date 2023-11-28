/*
Homework 5: Array average
? double average(int arr[], int len);
? Write a function that computes array average
? Don’t divide by length in the main
? Input 1, 8, 2, 10, 3 ? 4.8
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

int x;

float  sum(int arr[], ll len){
    if (len==1) return arr[0];
    int s= (arr[len-1] + sum(arr,len-1));
    return s/float(x);
}
signed main() {
    init();
    int n;
    cin>>n;
    x=n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    cout<< sum(arr,n);

}

