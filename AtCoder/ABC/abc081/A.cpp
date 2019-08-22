#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int i = 0;
    for (int j = 0; j < s.length(); ++j) {
        if (s[j] == '1') {
            i++;
        }
    }
    cout << i;
}