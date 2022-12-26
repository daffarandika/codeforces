#include <iostream>
using namespace std;

int main ()
{
    long long n, k;
    cin >> n >> k;

    long long half;
    if (n % 2 != 0) {
        half = n/2+1;
        if (k < half) { // the k is accessing an odd number
            cout << 2 * k - 1;
        } else {
            cout << 2 * ( k - half );
        }
    } else {
        half = n/2;
        if (k <= half) { // the k is accessing an odd number
            cout << 2 * k - 1;
        } else {
            cout << 2 * ( k - half );
        }
    }
    

    return 0;
}
