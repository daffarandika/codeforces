#include <iostream>
#include <string>
using namespace std;

int main (int argc, char *argv[])
{
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.length() <= 10) {
            cout << s << '\n';
        } else {
            string ns = "";
            ns += s[0];
            ns += to_string( s.length() - 2 );
            ns += s.back();
            cout << ns << '\n';
        }
    }
    return 0;
}
