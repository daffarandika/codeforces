#include <iostream>
#include <string>
using namespace std;
// http://codeforces.com/problemset/problem/133/A
// start 14:40
// end 14:47
int main() {
    string s;
    bool output = false;
    cin >> s;
    for (char c : s) {
        switch (c) {
            case 'H':
                output = true;
                break;
            case 'Q':
                output = true;
                break;
            case '9':
                output = true;
                break;
        break;
        }
    }
    if (output) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
