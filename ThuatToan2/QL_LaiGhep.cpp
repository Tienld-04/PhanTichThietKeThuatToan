#include <bits/stdc++.h>
using namespace std;
string A, B;
int n;
void LaiGhep(string s) {
    if (s.size() == n) {
        cout << s << "\n";
        return;
    } else
        LaiGhep(s + A[s.size()]);
    if (A[s.size()] != B[s.size()]) {
        LaiGhep(s + B[s.size()]);
    }
}
int main() {
    cin >> A >> B;
    n = A.size();
    // cout << n;
    // cout << A[0];
    for (int i = 0; i < n; i++) {
        if (A[i] > B[i]) {
            swap(A[i], B[i]);
        }
    }
    LaiGhep("");
}