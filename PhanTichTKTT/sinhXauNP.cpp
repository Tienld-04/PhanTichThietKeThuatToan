#include <bits/stdc++.h>
using namespace std;
void TRY(string x, int n) {
    if (x.size() == n)
        cout << x << endl;
    else {
        TRY(x + "0", n);
        TRY(x + "1", n);
    }
}
int main() {
    int n;
    cin >> n;
    TRY("", n);
}