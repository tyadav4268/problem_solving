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
        long long int n, k, f;
        cin>>n>>k>>f;
        int teacherpresenttime = 0;
        for(int i = 1; i <= n; i++){
            int si, ei;
            cin>>si>>ei;
            teacherpresenttime += (ei - si);
        }
        long long int freetime = (f) - teacherpresenttime;
        if(freetime >= k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

	return 0;
}
