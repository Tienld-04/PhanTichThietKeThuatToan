#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;
    set<int> v;
    v.insert(n);
    s.push(n);
    while (!s.empty()) {
        int u = s.top();
        s.pop();
        for (int i = 1; i * i <= u; i++) {
            if (u % i == 0) {
                int x = (u / i + 1) * (i - 1);
                if (v.find(x) == v.end()) {
                    v.insert(x);
                    s.push(x);
                }
            }
        }
    }
    for (auto i : v) {
        cout << i << " ";
    }
    return 0;
}