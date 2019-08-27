#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    string S;
    cin >> S;

    int res = 1;

    rep(i, S.size()) {
        if (S.at(i) == '+') {
            res++;
        } else if (S.at(i) == '-') {
            res--;
        }
    }

    cout << res << endl;
}