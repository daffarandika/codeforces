#include <iostream>
#include <vector>
using namespace std;
//https://codeforces.com/problemset/problem/139/A

int main ()
{
  int numOfDays = 7;
  vector<int> pagesPerDayOfWeek;
  int pages, page, res;

  cin >> pages;
  while (numOfDays--) {
    cin>>page;
    pagesPerDayOfWeek.push_back(page);
  }
  while (pages > 0) {
    for (int i = 0; i <= 6; i++) {
      pages -= pagesPerDayOfWeek[i];
      if (pages <= 0) { 
        res = i + 1;
        break;
      }
    }
  }
  cout << res;
  return 0;
}
