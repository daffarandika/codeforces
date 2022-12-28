#include <iostream>
#include <string>
using namespace std;

int main (int argc, char *argv[])
{
    int n, x = 0;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {

            if ( s[i] == '+' ) {
                x++;
                break;
            }

            if ( s[i] == '-' ) {
                x--;
                break;
            }

        }
    }
    cout << x;
    return 0;
}
