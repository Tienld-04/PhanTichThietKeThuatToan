#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}
int main() {
    string s;
    cin >> s;
    bool z = false;
    for (char c : s) {
        if (c == '0') {
            z = true;
            break;
        }
    }
    int sum = 0;
    for (char c : s) {
        sum += (c - '0');
    }
    if (z && sum % 9 == 0) {
        sort(s.begin(), s.end(), cmp);
        int i = 0;
        while (s[i] == '0') {
            i++;
        }
        swap(s[0], s[i]);
        cout << s << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}