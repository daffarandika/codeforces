#include <iostream>
#include <vector>
using namespace std;

int findMax (vector<int> v) {
    int maxIndex = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > v[ maxIndex ]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int findMin (vector<int> v) {
    int minIndex = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i] <= v[ minIndex ]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int rearrange(vector<int>& v){
    // diff between maxIndex and 0
    // diff between minIndex and size - 1
    
    int count(0), max( findMax(v) ), min( findMin(v) );

    count += max;
    count += ( (v.size() - 1) - min );

    if (max > min){
        count--;
    }
    return count;
}

int main() {
    int n, soldier;
    vector<int> soldiers;
    cin >> n;

    while (n--) {
        cin >> soldier;
        soldiers.push_back(soldier);
    }

    cout << rearrange(soldiers);

    return 0;
}
