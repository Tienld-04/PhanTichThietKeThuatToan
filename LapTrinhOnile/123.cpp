#include <bits/stdc++.h>
using namespace std;

long long POW(long long a, long long b) {
    long long ldt = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            ldt = (ldt * a) % 1000;
        }
        a = (a * a) % 1000;
        b /= 2;
    }
    return ldt;
}

int main() {
    long long a, b;
    cin >> a;
    cin >> b;
    if (POW(a, b) < 10) {
        cout << "00" << POW(a, b);
    } else if (POW(a, b) < 100) {
        cout << "0" << POW(a, b);
    } else {
        cout << POW(a, b);
    }
    return 0;
}