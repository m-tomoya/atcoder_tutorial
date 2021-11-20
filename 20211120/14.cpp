#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    vector<int> v(3);
    v = {A, B, C};
    int m;
    int M;
    int n;
    for (int i = 0; i < v.size(); i++) {
        n = v.at(i);
        if (i == 0) {
            m = n;
            M = n;
        } else {
            m = min(m, v.at(i));
            M = max(M, v.at(i));
        }
    }
    int answer = M - m;
    cout << answer << endl;
}
