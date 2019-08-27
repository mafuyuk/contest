#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    vector<int> lengths(3);
    rep(i, 3) {
        cin >> lengths.at(i);
    }

    sort(lengths.begin(), lengths.end());
    cout << lengths.at(2) - lengths.at(0) << endl;
}