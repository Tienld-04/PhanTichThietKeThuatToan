#include <bits/stdc++.h>

using namespace std;
int main() {
    int n, x;
    vector<int> v;
    cin >> n;
    while (n--) {
        cin >> x;
        if (v.empty() or v.back() < x)
            v.push_back(x);
        else {
            auto p = lower_bound(v.begin(), v.end(), x);
            *p = x;
        }
    }
    cout << v.size();
}