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
        int n, m, k;
        cin>>n>>m>>k;
        vector<int> users(n+1, 0);
        for(int i = 1; i <= k; i++){
            int li;
            cin>>li;
            if(li <= n){
                users[li]++;
            }
        }
        int count = 0;
        for(int j = 1; j <= n; j++){
            if(users[j] > 1){
                count++;
            }
        }
        cout<<count<<" ";
        vector<int> plag;
        for(int j = 1; j <= n; j++){
            if(users[j] > 1){
                plag.push_back(j);
            }
        }
        for(auto i: plag){
            cout<<i<<" ";
        }
        cout<<endl;

    }
	return 0;
}
