#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool b_s(int a[], int L, int R, int x) {
    if (L > R) {
        return false;
    }
    int m = (L + R) / 2;
    if (a[m] == x) {
        return true;
    } else if (a[m] < x) {
        return b_s(a, m + 1, R, x);
    } else {
        return b_s(a, L, m - 1, x);
    }
}
bool cmp(ll a, ll b) {
    return a > b;
}
int main() {
    int a[] = {10, 7, 10, 12, 17, 22, 45, 64, 64, 87}, n = sizeof(a) / sizeof(int);
    // tim phan tu dau tien lon hon hoac bang x
    int x = 7;
    int *p = lower_bound(a, a + n, 10);
    cout << *p << " tai vi tri " << p - a << endl;
    // tim phan tu dau tien lon hon han x
    int *q = upper_bound(a, a + n, 10);
    binary_search(a, a + n, x);
    cout << *q << " tai vi tri " << q - a << endl;
    if (b_s(a, 0, n - 1, x)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    int k;
    vector<int> v(k);
    v = {10, 7, 10, 12, 17, 22, 45, 64, 64, 87};
    k = sizeof(v) / sizeof(int);
    if (binary_search(v.begin(), v.begin() + n, x)) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
    for (auto x : v) {
        cout << x << " ";
    }
}