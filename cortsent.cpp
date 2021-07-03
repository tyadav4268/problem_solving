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
        cin>>n;

        vector<string> strvec;
        for(int k = 0; k < n; k++){
            string str; cin>>str;
            strvec.push_back(str);
        }
        int flag = 0;
        for(auto str: strvec){
            if(!(str[0] >= 'a' && str[0] <= 'm' || str[0] >= 'N' && str[0] <= 'Z')){
                // cout<<str[0];
                // cout<<"case 1 ";
                flag = 1;
                break;
            }
            else if(str[0] >= 'a' && str[0] <= 'm'){
                for(int i = 1; str[i] != '\0'; i++){
                    // cout<<str[i];
                    if(str[i] < 'a' || str[i] > 'm'){
                        // cout<<"case 2 ";
                        flag = 1;
                        break;
                    }
                }
            }
            else if(str[0] >= 'N' && str[0] <= 'Z'){

                for(int i = 1; str[i] != '\0'; i++){
                    // cout<<str[i];
                    if(str[i] < 'N' || str[i] > 'Z'){
                        // cout<<"case 3 ";
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 1){
                break;
            }
        }
        if(flag == 1){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
	}
	return 0;
}
