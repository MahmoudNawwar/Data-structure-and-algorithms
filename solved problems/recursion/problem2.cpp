/*
Homework 2: Power function
? int my_pow(int value, int p = 2)
? Return value * value ….. * value p times
? E.g. my_pow(7, 3) = 7 * 7 * 7 = 343
? Note: if p = 0, answer is 1
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



long long my_pow(ll value, ll p = 2){
    if (p==1) return value;
    return value * my_pow(value,p-1);
}






signed main() {
    init();
    int n;
    cin>>n;
cout<< my_pow(n,10);





}

