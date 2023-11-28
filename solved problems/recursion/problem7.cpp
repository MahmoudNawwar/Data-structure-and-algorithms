/*
Homework 7: Array Accumulation
? Given an array we want to accumulate it as following:
? Input 1 2 3 4 5 6
? Output array
? 1, 1+2, 1+2+3, 1+2+3+4, 1+2+3+4+5, 1+2+3+4+5+6
? 1, 3, 6, 10, 15, 21
? That is return arr[i] = sum of all numbers from 0 to i
? void accumulate_arr(int arr[], int len);
? Input 1 8 2 10 3 ? 1 9 11 21 24
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
void accumulate_arr(int arr[], int len){
    if (x==len) return;
    int c= arr[x];
    for (int i = 0; i <x ; ++i) {
        c+=arr[i];
    }
    cout<<c<<" ";x++;
    accumulate_arr(arr,len);
}
signed main() {
    init();
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n ; ++i) {
        cin>>arr[i];
    }
    accumulate_arr(arr,n);

}

