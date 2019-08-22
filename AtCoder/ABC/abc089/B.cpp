#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    bool Y = false;

    rep(i, N) {
        string S;
        cin >> S;

        if (S == "Y") {
            Y = true;
        }
    }

    if (Y) {
        cout << "Four" << endl;
    } else {
        cout << "Three" << endl;
    }
}