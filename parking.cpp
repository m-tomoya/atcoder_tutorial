#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int t;
    int b;
    int total;
    cin >> a;
    cin >> t;
    cin >> b;
    
    total = a * t;
    if (total < b ) {
        cout << total << endl;
    }
    else { 
        
        cout << b << endl;
    }
    
}
