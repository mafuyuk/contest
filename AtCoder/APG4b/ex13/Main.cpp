#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    int sum;


    vector<int> A(N);
    rep(i, A.size()) {
        cin >> A.at(i);
        sum += A.at(i);
    }

    rep(i, A.size()) {
        int diff = sum / N - A.at(i);
        if (diff < 0) {
            cout << -diff << endl;
        } else {
            cout << diff << endl;
        }
    }
}