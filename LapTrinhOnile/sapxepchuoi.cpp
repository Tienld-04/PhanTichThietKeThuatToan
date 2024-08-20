#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Tienld                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int mod = 1e9 + 7;
int main() {
    Tienld;
    string s;
    cin >> s;
    vector<int> v;
    stringstream ss(s);
    string tmp;
    while (getline(ss, tmp, '+')) {
        v.push_back(stoi(tmp));
    }
    sort(v.begin(), v.end());
    string s1;
    for (int i = 0; i < v.size(); i++) {
        s1 += to_string(v[i]);
        if (i < v.size() - 1) {
            s1 += "+";
        }
    }

    cout << s1 << endl;

    return 0;
}