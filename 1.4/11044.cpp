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
        a -= 2;
        b -= 2;

        int res = ((a + 2) / 3) * ((b + 2) / 3);
        cout << res << '\n';
    }

    return 0;
}