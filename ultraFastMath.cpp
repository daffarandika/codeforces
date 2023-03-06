#include <iostream>
#include <string>
using namespace std;
// http://codeforces.com/problemset/problem/61/A

int main () {
    string s, t;
    cin >> s >> t;
    int size = s.length();
    for (int i = 0; i < size; i++){
        cout << ( s[i]^t[i] );
    }
    cout << '\n';
    return 0;
}
