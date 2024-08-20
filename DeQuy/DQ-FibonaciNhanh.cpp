#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long fibo(int n)
{
    long long f0 = 0, f1 = 1, fn;
    if (n == 0)
    {
        return f0;
    }
    if (n == 1)
    {
        return f1;
    }
    for (int i = 2; i <= n; i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return f1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cout << fibo(n);
}