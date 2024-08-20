#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long a[] = {1000, 2000, 5000, 10000, 20000, 50000, 100000, 200000, 500000};
    int dem = 0;
    for (int i = 0; i < 9; i++) {
        if (n >= a[i]) {
            int num = n / a[i];
            dem += num;
            n %= a[i];
        }
    }

    cout << dem;
}