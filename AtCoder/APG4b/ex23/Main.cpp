#include <bits/stdc++.h>
using namespace std;

// TODO:
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i; i < N; i++) {
        cin >> A.at(i);
    }

    map<int, int> score;
    for (int i; i < N; i++) {
        score[A.at(i)] += 1;
    }

    //sort(score.rbegin(), score.rend());
    cout << score.at(0) << endl;
}