#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
    int flg = 0;
    for (int i = 0; i < 5; i++) {
        if (i != 0) {
            if (data.at(i) == data.at(i - 1)) {
                cout << "YES" << endl;
                flg = 1;
                break;
            }
            if (i == 4 && flg != 1) {
                cout << "NO" << endl;
            }
        }
    }
    // ここにプログラムを追記
}
