#include <iostream>
using namespace std;
// http://codeforces.com/problemset/problem/233/A

int main (int argc, char *argv[])
{
    int n;
    cin >> n;

    if (n == 1) {
        cout << -1;
    } else {
        for (int i = 2; i <= n; i++) {
            cout << i << ' ';
        }
        cout << 1;
    }


    return 0;
}
