#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a;
    int m;

    cin >> n;
    cin >> a;
    m = n % 500;
    if (m <= a) { 
        cout << "Yes" << endl;
    }
    else { 
        cout << "No" << endl;
    }
}




