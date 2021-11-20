#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    int i = 0;
    cin >> A >> B;
    string a;
    a = "A:";
    string b;
    b = "B:";

    while (i < A) {
        a += "]";
        i++;
    }

    i = 0;
    while (i < B) {
        b += "]";
        i++;
    }
       cout << a << endl;
    cout << b << endl;
}
