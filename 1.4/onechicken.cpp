#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (b - a > 0) {
        cout << "Dr. Chaz will have " << b - a << " piece";
        if (b - a > 1) {
            cout << 's';
        }
        cout << " of chicken left over!";
    } else {
        cout << "Dr. Chaz needs " << a - b << " more piece";
        if (a - b > 1) {
            cout << 's';
        }
        cout << " of chicken!";
    }
    cout << '\n';

    return 0;
}