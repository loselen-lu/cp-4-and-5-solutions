#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        int a;
        cin >> a;

        cout << a << " is ";
        if (a % 2 == 0) {
            cout << "even";
        } else {
            cout << "odd";
        }
        cout << '\n';
    }

    return 0;
}