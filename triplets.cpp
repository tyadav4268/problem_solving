#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int s;
    cin >> s;
    // cout << s << endl;
    sort(a, a+n);
    vector<vector<int> > res;
    for(int i = 0; i <= n-3; i++){
        int first = i + 1;
        int last = n - 1;
        while(first < last){
            int current_sum = a[i] + a[first] + a[last];
            if(current_sum == s){
                res.push_back({a[i], a[first], a[last]});
                first++;
                last--;
            }
            else if(current_sum > s){
                last--;
            }
            else{
                first++;
            }
        }
    }
    for(auto ele: res){
        for(int num: ele){
            cout << num << " ";
        }
        cout << endl;
    }

}
