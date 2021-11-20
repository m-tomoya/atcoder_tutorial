#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A;
    string first;
    string last;
    string out;

    cin >> N;
    cin >> A;
    vector<string> v(N);

    for (int i = 0; i < A + 2; i++) {
        first += "#";
    }
    cout << first << endl;
    for (int i = 0; i < N; i++) {
        cin >> v.at(i);
        v.at(i) = "#" + v.at(i) + "#";
    }
    for (int i = 0; i < N; i++) {
        cout << v.at(i) << endl;
    }
    for (int i = 0; i < A + 2; i++) {
        last += "#";
    }
    cout << last << endl;
}