#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, n;
    cin >> a >> b >> c >> n;

    if (a >= 1 && b >= 1 && c >= 1 && (a + b + c >= n) && (n >= 3)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << '\n';

    return 0;
}