#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    if (abs(a[0] + a[1]) > abs(a[n - 1] + a[n - 2])) {
        cout << abs(a[0] + a[1]);
    } else {
        cout << abs(a[n - 1] + a[n - 2]);
    }
}
