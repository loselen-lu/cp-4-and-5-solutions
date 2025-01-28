#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        string s;
        cin >> s;

        int res = 0;
        int cur = 0;
        int sz = s.length();

        for (int kk = 0; kk < sz; ++kk) {
            if (s[kk] == 'O') {
                ++cur;
            } else {
                cur = 0;
            }

            res += cur;
        }

        cout << res << '\n';
    }

    return 0;
}