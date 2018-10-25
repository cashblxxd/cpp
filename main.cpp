#include <bits/stdc++.h>

using namespace std;

double get_n(string s){
    float q = 1.618;
    long int k = s.length() - 1;
    double n = 0;
    for (auto i : s) {
        if (i == '1'){
            n += pow(q, k);
        }
        k--;
    }
    return n;
}

int main() {
    float q = 1.618;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    double n1 = get_n(s1), n2 = get_n(s2);
    cout << n1 << " " << n2 << "\n";
    if (n1 > n2) cout << ">";
    else if (n1 < n2) cout << "<";
    else cout << "=";
}