#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;
    int count = 0;
    for (char c : input){
        if (isupper(c)){
            count++;
        }
    }
    if (count > input.length() - count){
        for (char c : input){
            putchar(toupper(c));
        }
    } else {
        for (char c : input){
            putchar(tolower(c));
        }
    }
}
