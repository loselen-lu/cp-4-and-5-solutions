#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int cur_min = 100000;
    int index;
    for (int k = 0; k < n; ++k) {
        int a;
        cin >> a;

        if (a < cur_min) {
            index = k;
            cur_min = a;
        }
    }
    
    cout << index << '\n';

    return 0;
}