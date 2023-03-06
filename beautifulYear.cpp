#include <bits/stdc++.h>
using namespace std;
// http://codeforces.com/problemset/problem/271/A

bool hasDuplicate(int digits){
    string s = to_string(digits);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == s[i+1]){
            return true;
        }
    }
    return false;
}

int main(){
    int year;
    cin >> year;
    while (true) {
        if ( !hasDuplicate(++year) ){
            cout << year << '\n';
            break;
        }
    }
    return 0;
}
