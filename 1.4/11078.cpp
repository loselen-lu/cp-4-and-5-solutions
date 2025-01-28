#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        int n;
        cin >> n;

        int a, b;
        cin >> a;
        int mx = -299998;
        for (int kk = 1; kk < n; ++kk) {
            cin >> b;

            mx = max(a - b, mx);

            if (b > a) {
                a = b;
            }
        }

        cout << mx << '\n';
    }

    return 0;
}