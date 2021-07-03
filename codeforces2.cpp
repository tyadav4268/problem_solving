#include <bits/stdc++.h>
using namespace std;

int main() {
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
        long long sum = accumulate(a.begin(), a.end(), 0);
        if(sum % n != 0) cout << -1 << endl;
        else{
            int count = 0;
            for(int i = 0; i < n; i++){
                if(a[i] > sum / n) count++;
            }
            cout << count << endl;
        }
    }

	return 0;
}
