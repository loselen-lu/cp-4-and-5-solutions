#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int border[5];

    for (int k = 0; k < 5; ++k) {
        cin >> border[k];
    }

    int score;
    cin >> score;

    for (int k = 0; k < 5; k++) {
        if (score >= border[k]) {
            cout << char('A' + k);
            break;
        }
    }
    if (score < border[4]) {
        cout << 'F';
    }
    cout << '\n';

    return 0;
}