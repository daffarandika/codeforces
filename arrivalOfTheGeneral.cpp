#include <iostream>
#include <vector>
using namespace std;

int main() {
    int s, n, shortest(101), tallest(1), shortestIndex(0), tallestIndex(0);
    cin >> s;
    for (int i = 0; i < s;i++) {
        cin >> n;
        if (n <= shortest) {
            shortest = n;
            shortestIndex = i;
        }
        if (n > tallest) {
            tallest = n;
            tallestIndex = i;
        }
    }
    if (tallestIndex > shortestIndex) {
        tallestIndex--;
    }
    cout << (tallestIndex) + (s - shortestIndex - 1);
    return 0;
}
