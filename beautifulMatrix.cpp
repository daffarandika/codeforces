#include <bits/stdc++.h>
using namespace std;

int solve(){
    vector<vector<int>> matrix;
    int nonZeroRow, nonZeroCol;
    for (int r = 1; r <= 5; r++) {
        vector<int> row;
        int n;
        for (int c = 1; c <= 5; c++) {
            cin >> n;
            row.push_back(n);
            if (n != 0){
                nonZeroRow = r;
                nonZeroCol = c;
            }
        }
        matrix.push_back(row);
    }
    return (abs( nonZeroRow - 3 )) + (abs( nonZeroCol - 3 ));
}

int main(){
    cout << solve();
    return 0;
}
