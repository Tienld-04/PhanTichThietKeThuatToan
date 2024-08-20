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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0, max0 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            cnt++;
        } else if (a[i] != 0) {
            cnt = 0;
        }
        max0 = max(max0, cnt);
    }
    cout << max0;
    return 0;
}
// 1 0 0 0 1 0 0 0 0 1 0 0 1 0 1 0 1