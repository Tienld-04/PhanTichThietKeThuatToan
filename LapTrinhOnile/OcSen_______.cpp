#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int a, b, h;
    cin >> a >> b >> h;
    int n;
    if (h % (a - b) == 0) {
        n = h / (a - b) - 1;
    } else {
        n = h / (a - b) + 1;
    }

    cout << n;
}
