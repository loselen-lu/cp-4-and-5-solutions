#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        string s;
        int a;
        vector<pair<string, int>> websites;
        for (int kk = 0; kk < 10; ++kk) {
            cin >> s >> a;
            websites.push_back({s, a});
        }

        int mx = 0;
        for (const auto& kk : websites) {
            mx = max(kk.second, mx);
        }

        cout << "Case #" << k + 1 << ":\n";
        for (int kk = 0; kk < 10; ++kk) {
            if (websites[kk].second == mx) {
                cout << websites[kk].first << '\n';
            }
        }
    }

    return 0;
}