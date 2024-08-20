#include <bits/stdc++.h>

using namespace std;
set<string> s;
void lietKe(string x) {
    if (x == "" or s.find(x) != s.end())
        return;
    s.insert(x);
    lietKe(x.substr(0, x.size() - 1));
    lietKe(x.substr(1, x.size() - 1));
}
int main() {
    string z;
    cin >> z;
    lietKe(z);
    for (auto k : s)
        cout << k << endl;
}