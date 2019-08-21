#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    int avg = sum / 2;
    if (sum % 2 != 0) {
        avg++;
    }

    cout << avg;
}