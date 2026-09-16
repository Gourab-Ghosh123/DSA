#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int target;
    cin >> target;

    vector<int>ans(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> ans[i];
    }

    int l = 0;
    int r = n - 1;
    vector<int>res;
    while(l < r) {
        if(ans[l] + ans[r] == target) {
            res.push_back(l);
            res.push_back(r);
            cout << "target indexes are :";
            for(int i : res) {
                cout << i << " ";
            }
            return 0;
        }
        else if(ans[l] + ans[r] > target) {
            r--;
        }
        else {
            l++;
        }
    }
    return 0;
}