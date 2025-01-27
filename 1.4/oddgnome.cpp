#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        int nums;
        cin >> nums;

        int a;
        cin >> a;
        int temp;
        int cur_ans;
        for (int n = 1; n < nums; ++n) {
            cin >> temp;

            if (temp != a + 1) {
                cur_ans = n + 1;
            } else {
                a = temp;
            }
        }

        cout << cur_ans << '\n';
    }

    return 0;
}