#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        int m;
        cin >> m;

        int a;
        cin >> a;

        int ans1 = 0, ans2 = 0;
        int cur;
        for (int n = 1; n < m; ++n) {
            cin >> cur;

            if (cur > a) {
                ++ans1;
            } else if (cur < a) {
                ++ans2;
            }
            a = cur;
        }

        cout << "Case " << k + 1 << ": " << ans1 << ' ' << ans2 << '\n';
    }

    return 0;
}