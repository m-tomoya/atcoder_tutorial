#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int count = 0;
    cin >> a;
    vector<int> v(5);
    for (int i = 0; i < 5; i++) {
        cin >> v.at(i);
    }
    // for (int i = 0; i < 5; i++) {
    //     if (v.at(i) == a) {
    //         count++;
    //     }
    // }
    for (int x : v) {
        cout << x << endl;
    }

    // cout << count << endl;
}