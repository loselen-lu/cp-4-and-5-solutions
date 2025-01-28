#include <iostream>
#include <string>

using namespace std;

int digits_recur(string& s) {
    if (s == "1") {
        return 1;
    }

    int res = 0;
    int ans = 1;
    
    while (res != s.length()) {
        res = s.length();
        s = to_string(res);
        ++ans;
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (cin >> s && s != "END") {
        cout << digits_recur(s) << '\n';
    }

    return 0;
}