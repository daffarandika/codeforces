#include <iostream>
using namespace std;
// http://codeforces.com/problemset/problem/148/A

int main (){
    int dragons[4];
    int d, hit(0);
    for (int i = 0; i < 4; i++) {
        cin >> dragons[i];
    }
    cin >> d;

    for (int i = 1; i <= d; i++) {
        for (int dragon : dragons) {
            if (i % dragon == 0){
                hit++;
                break;
            }
        }
    }
    cout << hit;
    return 0;
}
