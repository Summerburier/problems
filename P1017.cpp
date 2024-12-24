#include<bits/stdc++.h>
using namespace std;
const char nc[20] = {
    '0',
    '1',
    '2',
    '3',
    '4',
    '5',
    '6',
    '7',
    '8',
    '9',
    'A',
    'B',
    'C',
    'D',
    'E',
    'F',
    'G',
    'H',
    'I',
    'J'
};
string ans;
int main() {
    int m, n, k, t, s;
    while (cin >> m >> n) {
        ans = "";
        s = m;
        while (m != 0) {
            k = m % n;
            t = m / n;
            if (k < 0) {
                k -= n;
                t++;
            }
            m = t;
            ans.push_back(nc[k]);
        }
        cout << s << "=";
        for (int i = ans.length() - 1; i >= 0; i--) {
            cout << ans[i];
        }
        cout << "(base" << n << ")" << endl;
    }
    return 0;
}