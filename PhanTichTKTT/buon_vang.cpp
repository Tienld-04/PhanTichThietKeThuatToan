#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, res = 0;
    cin >> n;
    vector<long> a(n);
    for (auto &x : a)
        cin >> x;
    long max_ht = a[n - 1]; // bien luu tru gia tri lon nhat hien tai
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < max_ht)
            res += max_ht - a[i];
        else
            max_ht = a[i]; // cap nhat gia tri lon nhat neu can
    }
    cout << res;
}