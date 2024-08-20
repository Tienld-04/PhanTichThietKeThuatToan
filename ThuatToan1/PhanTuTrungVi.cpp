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
    priority_queue<int> L;
    priority_queue<int, vector<int>, greater<int>> R;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (i % 2 != 0) {
            L.push(a[i]);
        } else {
            R.push(a[i]);
        }
        if (i > 1 && L.top() > R.top()) {
            int x = L.top();
            L.pop();
            int y = R.top();
            R.pop();
            L.push(y);
            R.push(x);
        }
        cout << L.top() << " ";
    }
}