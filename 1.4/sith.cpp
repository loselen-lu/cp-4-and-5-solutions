#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin, s);

    int a, b, force;
    cin >> a >> b >> force;

    if (a >= b) {
        cout << "VEIT EKKI";
    } else {
        if (force < 0) {
            cout << "JEDI";
        } else {
            cout << "SITH";
        }
    }
    cout << '\n';

    return 0;
}