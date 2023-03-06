#include <iostream>
#include <string>
using namespace std;
// http://codeforces.com/problemset/problem/32/B

int main(){
    string borze;
    string res;
    cin >> borze;
    
    for (int i = 0; i < borze.length(); i++) {
        if (borze[i] == '.'){
            res += '0';
        } else { // if borze[i] == '-'
            if (borze[i + 1] == '.'){
                res += '1';
                i += 1;
            } else {
                res += '2';
                i += 1;
            }
        }
    }
    cout << res << "\n";
    return 0;
}
