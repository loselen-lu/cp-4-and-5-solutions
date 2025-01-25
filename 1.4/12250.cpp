#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    
    int index = 1;
    while (cin >> s && s != "#") {
        cout << "Case " << index << ": ";

        if (s == "HELLO") {
            cout << "ENGLISH";
        } else if (s == "HOLA") {
            cout << "SPANISH";
        } else if (s == "HALLO") {
            cout << "GERMAN";
        } else if (s == "BONJOUR") {
            cout << "FRENCH";
        } else if (s == "CIAO") {
            cout << "ITALIAN";
        } else if (s == "ZDRAVSTVUJTE") {
            cout << "RUSSIAN";
        } else {
            cout << "UNKNOWN";
        }
        cout << '\n';

        ++index;
    }

    return 0;
}