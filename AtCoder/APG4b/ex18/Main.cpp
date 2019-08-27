#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        cin >> A.at(i) >> B.at(i);
    }

    vector<vector<char>> plot(N,vector<char>(N, '-'));

    for (int i; i < M; i++) {
        plot.at(A.at(i)-1).at(B.at(i)-1) = 'o';
        plot.at(B.at(i)-1).at(A.at(i)-1) = 'x';
    }

    for (int j = 0; j < N; j++) {
        for (int k = 0; k < N; k++) {
            cout << plot.at(j).at(k);
            if (k == N - 1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }

    }
}