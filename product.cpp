#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int b;
    int m;
    cin >> a;
    cin >> b;
    m =  (a * b) % 2;
    if (m == 1) {
        cout << "Odd" << endl;
    }
    else {
        cout << "Even" << endl;
    }

}
