#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    pair<int, int> p;
    cin>>p.first>>p.second;
    cout<<max(p.first, p.second);

    return 0;
}
