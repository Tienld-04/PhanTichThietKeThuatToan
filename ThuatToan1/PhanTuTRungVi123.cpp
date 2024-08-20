#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9;

int main() {
    Tienld;
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s.insert(x);
        auto it = s.begin();
        advance(it, (i + 1) / 2 - 1);
        cout << *it << " ";
    }

    return 0;
}