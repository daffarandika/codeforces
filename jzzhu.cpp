#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main () {
    int n, m, input;
    vector<pair<int, int>> v;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> input; // input is the number of candy a kid wants
        if (m < input) {
            v.push_back({input, i}); 
            cout << i << " = index\n";
            // first is number of candy a kid wants
            // second is the kid's number
        }
    }

    int lastKid = n;

    if (v.size() != 0){
        while (v.size() != 0) { // kid still wants more candy
            for (int i = 0; i < v.size(); i++) {
                v[i].first -= 3;
                if (v[i].first <= 0) {
                    lastKid = v[i].second;
                    cout << v[i].second << " out on " << i << "th \n";
                    vector<pair<int, int>>::iterator it = v.begin() + i ;
                    v.erase(it);
                }
            }
        }
    }

    cout << lastKid;
    return 0;
}
