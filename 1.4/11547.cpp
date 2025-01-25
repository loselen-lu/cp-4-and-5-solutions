#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        int n;
        cin >> n;

        int res = (((n * 567 / 9) + 7492) * 235 / 47 - 498) % 100;
        res = abs(res);

        cout << res / 10 << '\n';
    }

    return 0;
}