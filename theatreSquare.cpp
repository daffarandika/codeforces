#include <iostream>
#include <cmath>
using namespace std;
// https://codeforces.com/problemset/problem/1/A

int main ()
{
  int n,m,a;
  cin >> n >> m >> a;
  double theatreSquareArea = n * m * 1.0;
  double flagstoneArea = a * a * 1.0;
  int noOfFlagstones = ceil(theatreSquareArea / flagstoneArea);
  if (noOfFlagstones % 2 == 1) {
    noOfFlagstones++;
  }
  cout << noOfFlagstones;
  return 0;
}
