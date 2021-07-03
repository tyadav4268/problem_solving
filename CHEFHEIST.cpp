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
        long long int D, d, P, Q;
	    cin >> D >> d >> P >> Q;
	    int sum = 0;
	    long long int n = D / d;
	    long long int remn = D % d;
	    sum = d * ((n / 2) * (2 * P + (n - 1)* Q)) + (remn * (P + n * Q));
	    cout<<sum<<endl;
    }

	return 0;
}
