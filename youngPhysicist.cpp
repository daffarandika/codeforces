#include <iostream>
using namespace std;
// http://codeforces.com/problemset/problem/69/A

bool solve(int n){
    int x, y, z, xsum(0), ysum(0), zsum(0);
    while (n--) {
        cin >> x;
        cin >> y;
        cin >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }
    if (xsum == 0 && ysum == 0 && zsum == 0){
        return true;
    }
    return false;
}

int main (){
    int n;
    cin >> n;
    if (solve(n)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
