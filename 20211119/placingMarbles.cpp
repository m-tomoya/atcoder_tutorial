#include <bits/stdc++.h>
using namespace std;

int main() {
    string i;
    int i1;
    int i2;
    int i3;
    string s;
    string s1;
    string s2;
    string s3;
    int total;
    cin >> i;

    s = i;
    // s =  to_string(i);

    s1 = s[0];
    s2 = s[1];
    s3 = s[2];
    
    i1 = std::stoi(s1);
    i2 = std::stoi(s2);
    i3 = std::stoi(s3);
    
    total = i1 + i2 + i3;

    cout << total << endl;
}



