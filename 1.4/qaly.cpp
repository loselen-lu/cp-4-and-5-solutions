#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    double ans = 0;
    for (int k = 0; k < test; ++k) {
        double a, b;
        cin >> a >> b;

        ans += a * b;
    }

    cout << fixed << setprecision(4);
    cout << ans << '\n';

    return 0;
}