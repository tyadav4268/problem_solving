#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int minIndex(vector<int> &a){
    int min_index = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] < a[min_index]) min_index = i;
    }
    return min_index;
}

int maxIndex(vector<int> &a){
    int max_index = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] > a[max_index]) max_index = i;
    }

    return max_index;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            a.push_back(num);
        }
        int i = minIndex(a);
        int j = maxIndex(a);
        int mid = n / 2;
        if(n % 2 == 0){
            if(i < mid && j < mid){
                cout << max(i + 1, j + 1);
            }
            else if ((i < mid && j > mid) || (i > mid && j < mid)){
                if(i < mid) cout << (i + 1) + n - j << endl;
                else if(j < mid) cout << (j + 1) + n - i << endl;
            }
            else if(i > mid && j > mid){
                cout << max(n - i, n - j) << endl;
            }
            else if((i == mid &&  j < mid) || (j == mid && i < mid)) cout << mid + 1 << endl;
            else if((i == mid && j > mid) || (j == mid && i > mid))
            cout << mid << endl;
        }
        else{
            if((i < mid && j > mid) || (i > mid && j < mid)){
                if(i < mid) cout << i + 1 + n - j << endl;
                if(j < mid) cout << j + 1 + n - i << endl;
            }
            if(i <= mid && j <= mid) cout << max(i + 1, j + 1) << endl;
            if(i > mid && j > mid) cout << max(n - i, n - j) << endl;
        }

    }
    return 0;
}
