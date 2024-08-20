#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, s;
    cin >> x >> y >> s;
    int a, t;
    t = s / (x + y);
    if (s % (x + y) == 0) {
        a = t * x;
    } else {
        a = t * x + s % (x + y);
    }
    cout << a;
}
