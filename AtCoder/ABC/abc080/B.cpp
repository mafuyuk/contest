#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


// TODO
int main() {
    int N;
    cin >> N;

    int sum;
    rep(i, N) {
        sum += to_string(N)[i];
    }

    if ((N % sum) == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}