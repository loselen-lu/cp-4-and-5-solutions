#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    for (int k = 0; k < test; ++k) {
        string name;
        int study_begin, birth_year, courses, a;
        char slash;

        cin >> name >> study_begin >> slash >> a >> slash >> a >> birth_year >> slash >> a >> slash >> a >> courses;

        cout << name << ' ';
        if (study_begin >= 2010 || birth_year >= 1991) {
            cout << "eligible";
        } else if (courses >= 41) {
            cout << "ineligible";
        } else {
            cout << "coach petitions";
        }
        cout << '\n';
    }

    return 0;
}