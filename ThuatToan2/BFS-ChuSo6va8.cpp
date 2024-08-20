#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    if (n % 5 == 0) {
        cout << 0;
    } else {
        queue<long long> q;
        q.push(6);
        q.push(8);
        while (!q.empty()) {
            long long x = q.front();
            q.pop();
            if (x % n == 0) {
                cout << x;
                return 0;
            } else {
                q.push(x * 10 + 6);
                q.push(x * 10 + 8);
            }
        }
    }
}