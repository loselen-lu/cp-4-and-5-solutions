#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int per_month, months;
    cin >> per_month >> months;

    int ans = 0;
    for (int k = 0; k < months; ++k) {
        int a;
        cin >> a;

        ans += per_month - a;
    }
    ans += per_month;

    cout << ans << '\n';

    return 0;
}