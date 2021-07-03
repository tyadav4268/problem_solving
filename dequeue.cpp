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
        long long int m, n;
        cin>>n>>m;
        vector<long long int> q;
        for(long long int j = 0; j < m; j++){
            int number;
            cin>>number;
            q.push_back(number);
        }
        long long int i = 0, j = q.size()-1, count = 0;

        while(i < j){
            if(q[i] != q[i + 1])
            while(q[i] != q[i + 1] && i+1 <= q.size() - 1){
                count++;
                i++;
            }
            else if(q[j] != q[j - 1])
            while(q[j] != q[j - 1] && j - 1 >= 0){
                count++;
                j--;
            }
            else if(q[i] == q[i + 1] && q[j] == q[j - 1]){
                i++;
                count++;
                swap(i, j);
            }
        }
        cout<<count<<endl;
    }

	return 0;
}
