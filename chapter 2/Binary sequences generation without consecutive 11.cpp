
#include <iostream>
using namespace std;

int n, a[100], ok;

void ktao() {
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}

void sinh() {
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i]=0;
        --i;
    }
    if (i == 0) {
        ok = 0;
    } else {
        a[i]=1;
    }
}

bool check() {
    for (int i = 0; i < n ; i++) {
        if (a[i] == 1 && a[i + 1] == 1)
            return false;
    }
    return true;
}

int main() {
    cin >> n;
    ktao();
    ok=1;
    while (ok) {
        if (check()) {
            for (int i = 1; i <= n; i++) {
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}

