#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        int a, b;
        cin >> a >> b;

        if (a > b) {
            cout << '>';
        } else if (a < b) {
            cout << '<';
        } else {
            cout << '=';
        }
        cout << '\n';
    }

    return 0;
}