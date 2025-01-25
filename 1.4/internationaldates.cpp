#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    char slash;
    cin >> a >> slash >> b >> slash >> c;

    if (a <= 12 && b <= 12) {
        cout << "either";
    } else if (a <= 12) {
        cout << "US";
    } else {
        cout << "EU";
    }
    cout << '\n';

    return 0;
}