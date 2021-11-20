#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int l;
    cin >> S;
    // 1の数を表す変数
    int count = 1;
    int d = 0;
    l = S.length();

    for (int i = 0; i < l; i++) {
        // 1があればcountを増やす
        if (S.at(i) == '+') {
            count++;
        }
        if (S.at(i) == '-') {
            count--;
        }
    }

    cout << count << endl;
}
