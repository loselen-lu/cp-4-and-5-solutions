#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 1; k <= test; ++k) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << "Case " << k << ": ";
        if (a <= 20 && b <= 20 && c <= 20) {
            cout << "good";
        } else {
            cout << "bad";
        }
        cout << '\n';
    }

    return 0;
}