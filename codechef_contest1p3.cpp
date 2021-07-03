#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll ans(ll a, ll b){
    return (a*b) + a - b;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        ll ans1 = ans(v[1], v[0]);
        ll ans2 = ans(v[n - 1], v[n - 2]);
        cout<<max(ans1, ans2)<<endl;
    }
    return 0;
}
