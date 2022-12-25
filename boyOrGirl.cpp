#include <iostream>
#include <string>
#include <set>

using namespace std;

int main () {

    set<char> chars;
    int i = 0;
    string s;
    cin >> s;
    for (char c : s) {
        if (!chars.count(c)) {
            chars.insert(c);
            i++;
        }
    }

    if ( i % 2 == 0 ) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
