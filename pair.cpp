#include <bits/stdc++.h>
using namespace std;

int binarysearch(const vector<int> &a, int num){
    int low = 0;
    int high = a.size() - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(a[mid] == num) return mid;
        else if(a[mid] > num) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vector<int> a = {10, -6, 5, 5, 2, 3, -6, 9, 11};
    // sort(a.begin(), a.end());
    int s;
    cin >> s;
    //pair using set
    unordered_set<int> mset;
    for(int i = 0; i < a.size(); i++){
        if(mset.find(s-a[i]) != mset.end())
            cout << a[i] << " " << s-a[i] << endl;
        else
            mset.insert(a[i]);

    }
    // for(int i = 0; i < a.size(); i++){
    //     int first = a[i];
    //     int rem = s - first;
    //     int rem_index = binarysearch(a, rem);
    //     if(rem_index != -1 && rem_index != i){
    //         cout << i << " " << first << " " << rem_index << " " << rem << endl;
    //         return 0;
    //     }
    // }
    // cout << "No such Pair exist!" << endl;
    return 0;
}
