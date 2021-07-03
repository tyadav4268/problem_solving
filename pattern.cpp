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
    if(n < 0) return -1;
    int ar[n][n];
    for(int i = 0; i < n; i++){
        int k = 0;
        for(int j = 0; j < n; j++){
            ar[i][j] = n -k;
            // cout << n - k;
            cout << ar[i][j];
            if(k < i) k++;
        }
        for(int m = n-2; m >= 0; m--){
            cout << ar[i][m];
        }
        cout << endl;
    }
    for(int i = n - 2; i >= 0; i--){
        for(int j = 0; j < n; j++){
            cout << ar[i][j];
        }
        for(int m = n-2; m >= 0; m--){
            cout << ar[i][m];
        }
        cout << endl;
    }

}
