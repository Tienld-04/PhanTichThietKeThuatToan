#include <bits/stdc++.h>
using namespace std;

int main() {
    long n, x, res, C;
    cin >> n >> res;
    C = res;
    while (--n) {
        cin >> x;
        C = C > 0 ? C + x : x;
        res = max(res, C);
    }
    cout << res;
}