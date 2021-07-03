#include <bits/stdc++.h>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        a.push_back(num);
    }
    int largest = 0;
    int i = 1;
    // peak can be at any index from  1 to n - 2
    while(i < n - 1){
        if(a[i - 1] < a[i] and a[i + 1] < a[i]){
            // if it is a peak
            // counting number of elements in left side
            int j = i;
            int count = 1;
            while(j >= 1 and a[j - 1] < a[j]){
                count++;
                j--;
            }
            // counting elements in right
            while(i < n - 1 and a[i + 1] < a[i]){
                count++;
                i++;
            }
            largest = max(largest, count);
        }
        else{
            // if it is not a peak move forward and
            // let's find another peak
            i++;
        }


    }
    cout << largest << endl;
    return 0;
}
