#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int k = 1; k <= n; ++k) {
        cout << k << " Abracadabra\n";
    }

    return 0;
}