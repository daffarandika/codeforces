#include <iostream>
using namespace std;
// http://codeforces.com/problemset/problem/155/A

int main () {
    // start 14.27
    // end 14.37
    int n, a(0);
    cin >> n;
    int point, best, worst;
    cin >> point;
    best = point;
    worst = point;
    n--;
    while (n--) {
        cin >> point;
        if (point > best) {
            best = point;
            a++;
        }
        if (point < worst) {
            worst = point;
            a++;
        }
    }
    cout << a;
    return 0;
}
