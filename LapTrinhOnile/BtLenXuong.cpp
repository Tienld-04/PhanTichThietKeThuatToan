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
    int sum = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            sum -= n;
            n--;
            sum += n;
            n--;
        }
        if (n % 2 != 0) {
            sum += n;
            n--;
            sum -= n;
            n--;
        }
    }
    cout << sum;
}