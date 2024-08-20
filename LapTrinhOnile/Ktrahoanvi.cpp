#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main() {
    ldt int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (auto k : a) {
        cout << k << " ";
    }
    int k = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1] - 1 && a[i] >= 1 && a[i] <= n - 1) {
            if (a[i] == a[i + 1]) {
                k = 0;
                break;
            } else {
                k = 1;
            }
        } else {
            k = 0;
        }
    }
    if (k == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}