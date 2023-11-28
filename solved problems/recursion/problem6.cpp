/*
Homework 6: Array Increment
? void array_increment(int arr[], int len)
? The function increments each arr[i] with i
? E.g. for input
? [1, 2, 5, 9] it be [1+0, 2+1, 5+2, 9+3]
? 1 8 2 10 3 ? 1 9 4 13 7
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

int x=0;

void array_increment(int arr[], int len){
    if (x==len) return;
    cout<<arr[x]+x++<<" ";
    array_increment(arr,len);
}
signed main() {
    init();
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    array_increment(arr,n);

}

