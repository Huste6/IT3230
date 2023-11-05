#include <iostream>
#include <cmath>
using namespace std;

int demsochuso(string s) {
    int dem = 0;
    for (char ch : s) {
        if (isalpha(ch)){
            dem++;
        }
    }
    return dem;
}

int main() {
    long long n, m;
    cin >> n >> m;

    string s;
    while (n--) {
        cin >> s;
        int k = demsochuso(s);
        long long sum = 0;
        for (int i = 0; i < k; i++) {
            sum += int(s[i]) * pow(256, k - i - 1);
        }
        cout << sum % m << endl;
    }

    return 0;
}

