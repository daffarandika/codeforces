#include <iostream>
using namespace std;
int main ()
{
  int t, temp, sure = 0, implemented = 0;
  cin >> t;
  while (t--) {
    for (int i = 0; i < 3; i++) {
      cin >> temp;
      sure += temp;
    }
    if (sure >= 2) implemented++;
    sure = 0;
  }
  cout << implemented;
  return 0;
}
