#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    int sz_a = a.length(), sz_b = b.length();

    string flip_a = "", flip_b = "";

    for (int k = sz_a - 1; k >= 0; --k) {
        flip_a += a[k];
    }
    for (int k = sz_b - 1; k >= 0; --k) {
        flip_b += b[k];
    }

    int num_a = stoi(flip_a), num_b = stoi(flip_b);

    if (num_a > num_b) {
        cout << num_a;
    } else {
        cout << num_b;
    }
    cout << '\n';

    return 0;
}