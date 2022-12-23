#include <iostream>
using namespace std;

int countCupboard(int sum, int size) {
    int closed = size - sum;
    int opened = sum;

    if (closed > opened) {
        return sum;
    }
    return size - sum;
}


int main() {
    int n, l, r, lSum(0), rSum(0);
    cin >> n;
    int size = n;

    while (n--) {
        cin >> l;
        cin >> r;
        lSum += l;
        rSum += r;
    }

    cout << countCupboard(lSum, size) + countCupboard(rSum, size);
    return 0;
}
