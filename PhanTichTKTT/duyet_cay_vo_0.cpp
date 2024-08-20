#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> st;
    set<int> res;
    st.push(n);
    res.insert(n);
    while (st.size()) {
        int u = st.top();
        st.pop();
        for (int a = 1; a * a <= u; a++) {
            if (u % a == 0) {
                int v = (a - 1) * (u / a + 1);
                if (res.find(v) == res.end()) {
                    st.push(v);
                    res.insert(v);
                }
            }
        }
    }
    for (auto x : res) {
        cout << x << " ";
    }
    return 0;
}
