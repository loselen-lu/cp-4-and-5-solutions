#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        string s;
        cin >> s;

        if (s == "P=NP") {
            cout << "skipped";
        } else {
            int plus_pos = s.find('+');
            int a = stoi(s.substr(0, plus_pos));
            int b = stoi(s.substr(plus_pos + 1));

            cout << a + b;
        }
        cout << '\n';
    }

    return 0;
}