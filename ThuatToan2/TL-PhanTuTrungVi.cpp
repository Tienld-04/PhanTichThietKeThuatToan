#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    priority_queue<int> L;
    priority_queue<int, vector<int>, greater<int>> R;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        if (i % 2 == 0) {
            R.push(v[i]);
        } else {
            L.push(v[i]);
        }
        if (i >= 2 && L.top() > R.top()) {
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
