#include <bits/stdc++.h>
using namespace std;
long long gt(int n)
{
    if (n == 0)
        return 1;
    else
        return n * gt(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << gt(n);
}