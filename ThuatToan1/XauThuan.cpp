#include <bits/stdc++.h>
#define ll long long
#include <cctype>
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main() {
    ldt string s;
    getline(cin, s);
    string k = " ";
    bool check = true;
    for (char x : s) {
        if (!islower(x)) {
            check = false;
            break;
        } else {
            check = true;
            if (isspace(x)) {
                check = false;
                break;
            }
        }
    }
    if (check) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}