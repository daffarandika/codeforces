#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int n;
    double sum = 0;
    double p;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        sum += (double) p;
    }
    cout << setprecision(9) << fixed << (double) ( sum / n );
}
