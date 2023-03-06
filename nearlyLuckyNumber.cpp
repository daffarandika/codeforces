#include <iostream>
#include <string>
using namespace std;
// http://codeforces.com/problemset/problem/110/A

bool isLuckyElement(char c){ //check wheter it is a 4 or a 7
    if (c != '4' && c != '7') {
        return 0;
    }
    return 1;
}

bool isLuckyNumber(int n) {
    string s = to_string(n);
    for ( char c : s ) {
        if (!isLuckyElement(c)) {
            return 0;
        }
    }
    return 1;
}

int countLuckyElements(long long n){
    int count = 0;
    string s = to_string(n);
    for ( char c : s ) {
        if (isLuckyElement(c)) {
            count++;
        }
    }
    return count;
}

bool isNearlyLuckyNumber(long long n){
    return isLuckyNumber(countLuckyElements(n));
}


int main (){
    long long n;
    cin >> n;
    if (isNearlyLuckyNumber(n)){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
