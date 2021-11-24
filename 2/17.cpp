#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++) {
        cin >> P.at(i);
    }

    // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
    int count = 0;
    for (int apple : A) {
        for (int pinapple : P) {
            if (S == (apple + pinapple)) {
                count++;
            }
        }
    }
    cout << count << endl;
    // ここにプログラムを追記
}
