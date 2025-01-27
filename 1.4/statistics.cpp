#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int index = 1;
    while (cin >> n) {
        int mn = 1000000;
        int mx = -1000000;
        int a;
        for (int k = 0; k < n; ++k) {
            cin >> a;

            mn = min(a, mn);
            mx = max(a, mx);
        }

        cout << "Case " << index << ": " << mn << ' ' << mx << ' ' << mx - mn << '\n';
        ++index;
    }

    return 0;
}