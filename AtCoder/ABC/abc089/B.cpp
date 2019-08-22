#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    bool P = false;
    bool W = false;
    bool G = false;
    bool Y = false;

    rep(i, N) {
        string S;
        cin >> S;

        if (S == "P") {
            P = true;
        } else if (S == "W") {
            W = true;
        } else if (S == "G") {
            G = true;
        } else if (S == "Y") {
            Y = true;
        }
    }

    if (P && W && G) {
        if (Y) {
            cout << "Four" << endl;
        } else {
            cout << "Three" << endl;
        }

    }
}