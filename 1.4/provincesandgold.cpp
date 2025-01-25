#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    int total_resource = 3 * a + 2 * b + c;

    if (total_resource > 1) {
        if (total_resource >= 8) {
            cout << "Province";
        } else if (total_resource >= 5) {
            cout << "Duchy";
        } else {
            cout << "Estate";
        }
        
        cout << " or ";

        if (total_resource >= 6) {
            cout << "Gold";
        } else if (total_resource >= 3) {
            cout << "Silver";
        } else {
            cout << "Copper";
        }
    } else {
        cout << "Copper";
    }
    cout << '\n';

    return 0;
}