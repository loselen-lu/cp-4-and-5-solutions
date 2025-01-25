#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int d1 = b - a, d2 = c - b;

    if ((d1 >= 0 && d2 < 0) || (d1 < 0 && d2 > 0)) {
        cout << "turned";
    } else if (abs(d2) > abs(d1)) {
        cout << "accelerated";
    } else if (abs(d2) < abs(d1)) {
        cout << "braked";
    } else {
        cout << "cruised";
    }
    cout << '\n';

    return 0;
}