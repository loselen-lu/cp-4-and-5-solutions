#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int index = 1;
    while (cin >> n && n != 0) {
        int cur_ans = 0;
        for (int k = 0; k < n; ++k) {
            int a;
            cin >> a;

            if (a != 0) {
                ++cur_ans;
            } else {
                --cur_ans;
            }
        }

        cout << "Case " << index << ": ";
        cout << cur_ans << '\n';
        
        ++index;
    }

    return 0;
}