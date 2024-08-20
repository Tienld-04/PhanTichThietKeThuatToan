
#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9;
int main() {
    ldt;
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a)
        cin >> x;
    sort(a, a + n, greater<>());
    for (int i = 0; i < n; i++) {
        a[i] += i;
    }
    cout << *max_element(a, a + n) + 2;
}