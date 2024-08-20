#include <bits/stdc++.h>
using namespace std;
void bfs(int n)
{
    if (6 % n == 0)
    {
        cout << "6";
        return;
    }
    if (8 % n == 0)
    {
        cout << "8";
        return;
    }
    queue<int> Q;
    map<int, string> M;
    Q.push(6 % n);
    M[6 % n] = "6";
    Q.push(8 % n);
    M[8 % n] = "8";
    while (Q.size())
    {
        int u = Q.front();
        Q.pop();
        for (auto c : {'6', '8'})
        {
            int k = (u * 10 + c - '0') % n; // c - '0' chuyển c thành số nguyên
            if (M.find(k) == M.end())
            {
                M[k] = M[u] + c;
                Q.push(k);
            }
            if (k == 0)
            {
                cout << M[0];
                return;
            }
        }
    }
    cout << 0;
}
int main()
{
    int n;
    cin >> n;
    bfs(n);
}
