#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<int, int> memo;

int digits_sum(const int& a) {
    if (memo.find(a) != memo.end()) {
        return memo[a];
    }
    
    int res = 0;
    string temp = to_string(a);

    for (const char& k : temp) {
        res += k - '0';
    }

    if (res > 9) {
        res = digits_sum(res);
    }

    memo[a] = res;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    while (cin >> input && input != 0) {
        cout << digits_sum(input) << '\n';
    }

    return 0;
}