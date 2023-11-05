#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    unordered_set<string> st;
    while (cin >> s) {
        if (s == "*") break;
        st.insert(s);
    }
    string s1, s2;
    while (cin >> s1) {
        if (s1 == "find") {
            cin >> s2;
            if (st.count(s2)) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if (s1 == "insert") {
            cin >> s2;
            if (st.count(s2)) {
                cout << "0\n";
            } else {
                cout << "1\n";
                st.insert(s2);
            }
        } else if (s1 == "***") {
            break;
        }
    }
    return 0;
}
