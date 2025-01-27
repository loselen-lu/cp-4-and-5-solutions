#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << fixed << setprecision(2);

    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        int sum_a = 0, sum_b = 0;

        for (const char& k : a) {
            if (isupper(k)) {
                sum_a += k - 'A' + 1;
            } else if (islower(k)) {
                sum_a += k - 'a' + 1;
            }
        }
        for (const char& k : b) {
            if (isupper(k)) {
                sum_b += k - 'A' + 1;
            } else if (islower(k)) {
                sum_b += k - 'a' + 1;
            }
        }

        while (sum_a > 9) {
            string temp = to_string(sum_a);
            sum_a = 0;

            for (const char& k : temp) {
                sum_a += k - '0';
            }
        }

        while (sum_b > 9) {
            string temp = to_string(sum_b);
            sum_b = 0;

            for (const char& k : temp) {
                sum_b += k - '0';
            }
        }

        double res;
        if (sum_a >= sum_b) {
            res = double(sum_b) / double(sum_a);
        } else {
            res = double(sum_a) / double(sum_b);
        }
        res *= 100;

        cout << res << " %" << '\n';
    }

    return 0;
}