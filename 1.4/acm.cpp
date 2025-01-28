#include <iostream>
#include <vector>
#include <tuple>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<tuple<int, char, string>> problems;

    int minutes;
    char code;
    string solved;
    while (cin >> minutes && minutes != -1 && cin >> code >> solved) {
        problems.push_back({minutes, code, solved});
    }

    unordered_map<char, bool> map;
    int solved_score = 0;
    int nums = 0;
    int sz = problems.size();
    for (int k = sz - 1; k >= 0; --k) {
        if (get<2>(problems[k]) == "right") {
            solved_score += get<0>(problems[k]);
            map[get<1>(problems[k])] = true;
            ++nums;
        } else if (map.find(get<1>(problems[k])) != map.end()) {
            solved_score += 20;
        }
    }

    cout << nums << ' ' << solved_score << '\n';

    return 0;
}