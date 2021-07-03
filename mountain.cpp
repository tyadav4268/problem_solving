#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    int left = 0;
    int peak = 0;
    int right = 0;
    int h = 0;
    while(right < n){
        cout << left << " " << peak << " " << right << endl;
        while(a[peak + 1] > a[peak]){
            peak++;
        }
        right = peak;
        while(a[right + 1] < a[right]){
            right++;
        }
        cout << left << " " << peak << " " << right << endl;
        if(right < n)
            h = max(h, right - left + 1);
        left = right;
        peak = right;
    }
    cout << h << endl;
    return 0;
}
