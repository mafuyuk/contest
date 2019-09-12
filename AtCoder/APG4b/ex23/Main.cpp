#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i; i < N; i++) {
        cin >> A.at(i);
    }

    map<int, int> score;
    for (int x : A) {
        score[x] += 1;
    }

    int max_cnt = 0;
    int ans = -1;
    for (int x : A) {
        if (max_cnt < score.at(x)) {
            max_cnt = score.at(x);
            ans = x;
        }
    }

    cout << ans << " " << max_cnt << endl;
}