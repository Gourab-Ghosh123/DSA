#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter a string :";
    string s;
    cin >> s;

    int count = 0;
    for(int i = 0 ; i < s.size() ; i+=2) {
        if(s[i] != s[i + 1]) {
            count++;
        }
    }
    cout << count;
    return 0;
}