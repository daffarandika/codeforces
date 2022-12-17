#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, adj(0);
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]){
            adj++;
        }
    }

    cout << adj;

    return 0;
}
// 8 minutes
