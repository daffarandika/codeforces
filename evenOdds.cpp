#include <iostream>
using namespace std;
// http://codeforces.com/problemset/problem/318/A

int main ()
{
    long long n, k;
    cin >> n >> k;

    long long bp = ( n + 1 )/2;

    if (k <= bp) {
        cout << 2 * k - 1;
    } else {
        cout << 2 * (k - bp);
    }

    return 0;
}
