
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    stack<int> st;
    set<int> s;
    for (auto x : {4, 7, 2, 8, 4, 9, 3, 6}) {
        st.push(x);
        s.insert(x);
    }
    cout << "\nsize st: " << st.size();
    cout << "\nsize s: " << s.size();
    cout << endl;
    while (st.size()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    if (s.find(7) != s.end()) {
        cout << "co 7";
    } else {
        cout << "khong co 7";
    }
    cout << endl;
    for (auto x : s) {
        cout << x << " ";
    }
    return 0;
}