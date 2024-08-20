#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MOD 1000000007
ll O[1000001] = {};
ll OA[1000001] = {};
ll OAO[1000001] = {};

int main() {
    string s;
    cin >> s;
    s = '$' + s;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == 'O')
            O[i] = O[i - 1] + 1;
        else
            O[i] = O[i - 1];
    }
    for (int i = 2; i < s.size(); i++) {
        if (s[i] == 'A')
            OA[i] = O[i - 1] + OA[i - 1];
        else
            OA[i] = OA[i - 1];
    }

    for (int i = 3; i < s.size(); i++) {
        if (s[i] == 'O')
            OAO[i] = OAO[i - 1] + OA[i - 1];
        else
            OAO[i] = OAO[i - 1];
    }
    cout << OAO[s.size() - 1];
}
