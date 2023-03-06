#include <iostream>
#include <iomanip>
using namespace std;
// http://codeforces.com/problemset/problem/200/B

int main (){
    int n;
    double sum = 0;
    double p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        sum += (double) p;
    }
    cout << setprecision(9) << fixed << (double) ( sum / n );
}
