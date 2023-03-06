#include <iostream>
#include <string>
using namespace std;
// http://codeforces.com/problemset/problem/118/A
int main () {
    string s;
    cin >> s;
    int n = string::find('a', s);
    s.erase('o');
    s.erase('y');
    s.erase('e');
    s.erase('u');
    s.erase('i');
    cout << s << '\n';
    return 0;
}
