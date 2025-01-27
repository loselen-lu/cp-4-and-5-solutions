#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 1; k <= test; ++k) {
        cout << "Case " << k << ": ";

        int q;
        cin >> q;

        int cur_ans = 0;
        for (int n = 0; n < q; ++n) {
            int a;
            cin >> a;

            cur_ans = max(a, cur_ans);
        }
        
        cout << cur_ans << '\n';
    }

    return 0;
}