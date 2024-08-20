#include <bits/stdc++.h>
#define ll long long
#define ldt                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main() {
    ldt int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k = INT_MAX, t = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < k) {
            k = a[i];
            t = i;
        }
    }

    cout << "Menor valor: " << k;
    cout << "\nPosicao: " << t;
}