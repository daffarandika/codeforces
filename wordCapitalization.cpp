#include <iostream>
#include <string>
using namespace std;
// http://codeforces.com/problemset/problem/281/A

int main(){
    string s;
    cin >> s;
    s[0] = toupper( s[0] );
    cout << s << '\n';
    return 0;
}
