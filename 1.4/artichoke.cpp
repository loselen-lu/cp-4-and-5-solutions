#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

double price(const int& p, const int& a, const int& b, const int& c, const int& d, const int& k) {
    const double ak = double(a) * k;
    const double ck = double(c) * k;
    return p * (sin(ak + b) + cos(ck + d) + 2.0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    vector<double> prices;
    for (int k = 1; k <= n; ++k) {
        prices.push_back(price(p, a, b, c, d, k));
    }

    double x = prices[0], y;
    double ans = 0;
    for (int k = 1; k < n; ++k) {
        y = prices[k];

        ans = max(x - y, ans);

        if (y > x) {
            x = y;
        }
    }

    cout << fixed << setprecision(7);
    cout << ans << '\n';

    return 0;
}