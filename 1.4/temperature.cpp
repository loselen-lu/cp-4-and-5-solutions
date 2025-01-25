#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << fixed << setprecision(7);
    if (b > 1) {
        double res = double(a) / (1 - double(b));
        cout << res;
    } else if (a == 0) {
        cout << "ALL GOOD";
    } else {
        cout << "IMPOSSIBLE";
    }
    cout << '\n';

    return 0;
}