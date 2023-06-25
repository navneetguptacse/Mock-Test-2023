#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> frequency;
    for (char c : s) {
        frequency[c]++;
    }
    for (int i = 0; i < s.length(); i++) {
        if (frequency[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    int t;
    string s;
    cin >> t;
    while(t--) {
        cin >> s;
        cout << firstUniqChar(s) << endl;
    }
    return 0;
}
