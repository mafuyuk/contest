#include <iostream>
using namespace std;

// n を受け取って、0~n の総和を計算して返す関数
int sum(int n) {
    // 処理内容 : 0 ~ n の総和を計算する

    // ベースケース
    if (n == 0) {
        return 0;  // 再帰呼び出しをせずとも 0 という結果が確定している
    }

    // 再帰ステップ
    int s = sum(n - 1);  // 0 ~ (n-1) の総和
    return s + n;  // 0 ~ n の総和
}
int main() {
    cout << sum(10) << endl;
}