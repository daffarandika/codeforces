#include <iostream>
#include <set>
using namespace std;

int main() {
    int n = 4;
    set<int> s;
    int m;
    while (n--) {
        cin >> m;
        s.insert(m);
    }
    cout << 4 - s.size() << "\n";
    return 0;
}
