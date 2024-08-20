#include <bits/stdc++.h>
using namespace std;
long zero(long n) {
    if (n == 0)
        return 1;
    long s = 0;
    for (long a = 1; a * a <= n; a++)
        if (n % a == 0)
            s += zero((a - 1) * (n / a + 1));
    return s;
}
main() {
    long n;
    cin >> n;
    cout << zero(n);
}
