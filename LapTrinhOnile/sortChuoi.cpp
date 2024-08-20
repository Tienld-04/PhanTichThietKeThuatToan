#include <bits/stdc++.h>
#define ll long long
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define Ti first
#define Vi second
const int mod = 1e9 + 7;

int main() {
    string s;
    cin >> s;
    vector<string> k;
    vector<int> v;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            string tmp(1, s[i]);
            k.push_back(tmp);
        } else {
            string x(1, s[i]);
            int num = stoi(x);
            v.push_back(num);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i <= k.size() || i <= v.size(); i++) {
        cout << v[i] << k[i];
    }
}