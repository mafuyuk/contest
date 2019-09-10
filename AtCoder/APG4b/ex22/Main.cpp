#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> input(N);
    for (int i; i < N; i++) {
        int a, b;
        cin >> a >> b;
        // bとaをswapさせた状態でpairにいれる
        input.at(i) = make_pair(b, a);
    }

    // 昇順にソート
    sort(input.begin(), input.end());

    for (int i; i < N; i++) {
        cout << input.at(i).second << " " << input.at(i).first << endl;
    }
}