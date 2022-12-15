#include <iostream>
#include <vector>
using namespace std;

bool toggle(int n, bool b){
    if (n%2 == 0){
        return b;
    }
    return !b;
}

void switchLights(vector<vector<int>>& vInput, int row, int col, int n){
    /* TODO 
     * if x minus == negative value
     * if x plus == outofbound value
     */
    vInput[row - 1][col] = toggle(n, vInput[row - 1][col]); // up
    vInput[row][col - 1] = toggle(n, vInput[row][col - 1]); // left
    vInput[row][col] = toggle(n, vInput[row][col]); //center
    vInput[row][col + 1] = toggle(n, vInput[row][col + 1]); // right
    vInput[row + 1][col] = toggle(n, vInput[row + 1][col]); // down
}

int main() {
    vector<vector<int>> lights = { 
        {0,0,0,0,0},
        {0,1,1,1,0},
        {0,1,1,1,0},
        {0,1,1,1,0},
        {0,0,0,0,0}
    };
    // input
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <=3; j++){
            int n;
            cin >> n;
            switchLights(lights, i, j, n);
        }
    }
    // output
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <=3; j++){
            cout << lights[i][j];
        }
        cout << '\n';
    }
//    for (vector<int> v : lights){
//        for (int i : v) {
//            cout << i;
//        }
//        cout << '\n';
//    }
    return 0;
}
