#include <iostream>
#include <math.h>
using namespace std;
// http://codeforces.com/problemset/problem/151/A

int main ()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drinks = k * l;
    int slicesOfLime = c * d;

    cout << min( min( drinks/nl, slicesOfLime), p/np) / 3; 
    
    return 0;
}
