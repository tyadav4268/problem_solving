#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int numofseasons, introL = 0;
        cin>>numofseasons;
        int Qs[numofseasons];
        for(int i = 0; i < numofseasons; i++){
            cin>>Qs[i];
        }
        long long int totalEpisodeLength = 0;
        for(int j = 0; j < numofseasons; j++){
            int numofepisodes;
            cin>>numofepisodes;
            int episodeLength;
            for(int i = 0; i < numofepisodes; i++){
                cin>>episodeLength;
                if(i == 0){
                    totalEpisodeLength = totalEpisodeLength + episodeLength;
                }
                else{
                        totalEpisodeLength = totalEpisodeLength + episodeLength - Qs[j];
                }
            }
        }
        long long int totalTime = introL + totalEpisodeLength;
        cout<<totalTime<<endl;

    }

    return 0;
}
