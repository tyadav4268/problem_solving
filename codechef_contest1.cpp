#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    unsigned int t;
    unsigned int d, c, a1, a2, a3, b1, b2, b3;
    cin>>t;
    while(t--){
        cin>>d>>c;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int tc1, tc2;
        tc1 = a1 + a2 + a3;
        tc2 = b2 + b1 + b3;
        if(tc1 < 150 && tc2 < 150){
            cout<<"NO"<<endl;
        }
        else if(tc1 >= 150 && tc2 >= 150){
            if(2*d <= c){
                cout<<"NO"<<endl;
            }
            else
                cout<<"YES"<<endl;
        }
        else if((tc1 >= 150 && tc2 <= 150)||(tc1 < 150 && tc2 >= 150)){
            if(2*d <= c + d){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}
