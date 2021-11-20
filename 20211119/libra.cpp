#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    int d;
    int m;
    int n;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    m = a + b;
    n = c + d;
    if (m > n) {
        cout << "Left" << endl;
    }
    else if (m == n)  {
        cout << "Balanced" << endl;
    }
    else if (m < n) { 
        cout << "Right" << endl;
    }
}