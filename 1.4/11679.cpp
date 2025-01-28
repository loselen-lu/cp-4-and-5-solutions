#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    while (cin >> a >> b && !(a == 0 && b == 0)) {
        vector<int> cur_cash(a, 0);
        for (int k = 0; k < a; ++k) {
            cin >> cur_cash[k];
        }

        int x, y, z;
        for (int k = 0; k < b; ++k) {
            cin >> x >> y >> z;

            cur_cash[x - 1] -= z;
            cur_cash[y - 1] += z;
        }

        bool possible = true;
        for (int k = 0; k < a; ++k) {
            if (cur_cash[k] < 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "S";
        } else {
            cout << "N";
        }
        cout << '\n';
    }

    return 0;
}