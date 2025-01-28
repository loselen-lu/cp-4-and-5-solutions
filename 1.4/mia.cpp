#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool vec_comp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first > b.first;
    } else {
        return a.second > b.second;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    while (cin >> a >> b >> c >> d && !(a == 0 && b == 0 && c == 0 && d == 0)) {
        pair<int, int> p1, p2;

        if (b > a) {
            swap(a, b);
        }
        if (d > c) {
            swap(c, d);
        }

        if (a == 2 && b == 1) {
            p1 = {21, 3};
        } else if (a == b) {
            p1 = {a * 11, 2};
        } else {
            p1 = {a * 10 + b, 1};
        }

        if (c == 2 && d == 1) {
            p2 = {21, 3};
        } else if (c == d) {
            p2 = {c * 11, 2};
        } else {
            p2 = {c * 10 + d, 1};
        }

        if (p1 == p2) {
            cout << "Tie.";
        } else {
            vector<pair<int, int>> res = {p1, p2};
            sort(res.begin(), res.end(), vec_comp);

            if (res[0] == p1) {
                cout << "Player 1 wins.";
            } else {
                cout << "Player 2 wins.";
            }
        }
        cout << '\n';
    }

    return 0;
}