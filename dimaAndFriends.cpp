#include <iostream>
using namespace std;
// http://codeforces.com/problemset/problem/272/A

int main ()
{
    int nof, f, sum = 0, count = 0;
    cin >> nof;
    int n = nof;

    while (n--) {
        cin >> f;
        sum += f;
    }

    // to count dimas in
    nof++;

    // i represents the number of finger dimas is putting up

    for (int i = 1; i <= 5; i++) {
        if ( (sum + i) % nof != 1) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
