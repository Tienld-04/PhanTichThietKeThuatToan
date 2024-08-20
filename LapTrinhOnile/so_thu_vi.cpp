#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

bool kq(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0 && isPrime(i) && isPrime(n / i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if (kq(n)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
