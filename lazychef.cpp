#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
	int t = 0;
	cin>>t;
	while(t--){
	    int x, m, d;
	    cin>>x>>m>>d;
	    if(m*x <= x+d){
	        cout<<m*x<<endl;
	    }
	    else{
	        cout<<x+d<<endl;

	    }
	}
	return 0;
}
