#include <bits/stdc++.h>
using namespace std;
// phan tu nho hơn lơn nhat dung trc
int main() {
    int n, x;
    map<int, int> v;
    cin >> n;
    while (n--) {
        cin >> x;
        auto it = v.upper_bound(-x);
        if (it == v.end())
            cout << 0 << endl;
        else {
            cout << -(*it).first << " " << (*it).second << endl;
        }
        v[-x]++;
    }
}