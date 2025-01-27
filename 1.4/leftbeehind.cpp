#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    while (cin >> a >> b && !(a == 0 && b == 0)) {
        if (a + b == 13) {
            cout << "Never speak again.";
        } else if (a > b) {
            cout << "To the convention.";
        } else if (a < b) {
            cout << "Left beehind.";
        } else {
            cout << "Undecided.";
        }
        cout << '\n';
    }

    return 0;
}