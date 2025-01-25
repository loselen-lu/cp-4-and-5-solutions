#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, int> direction = {{"North", 0}, {"East", 1}, {"South", 2}, {"West", 3}};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;
    cin >> a >> b >> c;

    if (((direction[a] + 2) % 4 == direction[b]) && ((direction[a] + 3) % 4 == direction[c])) {
        cout << "Yes";
    } else if (((direction[a] + 1) % 4 == direction[b]) && ((direction[a] + 2) % 4 == direction[c] || (direction[a] + 3) % 4 == direction[c])) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    cout << '\n';

    return 0;
}