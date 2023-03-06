#include <iostream>
#include <math.h>
// http://codeforces.com/problemset/problem/80/A

using namespace std;

bool isPrime(int n){

    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0){
            return 0;
        }
    }
    return 1;

}

int generateNextPrime(int n){
    n+=2;
    while (true){
        if ( isPrime(n) ) {
            return n;
        }
        n+=2;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    if ( m == generateNextPrime(n) ){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
