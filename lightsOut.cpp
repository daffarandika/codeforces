#include <bits/stdc++.h>
using namespace std;

bool toggle(int n, bool b){
    if (n%2 == 0){
        return b;
    }
    return !b;
}

void switchLights(vector<vector<int>>& vInput){
    int i,j,n;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> n;
            switch (j) {
                case 0:
                    vInput[i][j] = toggle(n, vInput[i][j]); 
                    vInput[i][j+1] = toggle(n, vInput[i][j+1]); 
                    break;
                case 1:
                    vInput[i][j-1] = toggle(n, vInput[i][j-1]); 
                    vInput[i][j] = toggle(n, vInput[i][j]); 
                    vInput[i][j+1] = toggle(n, vInput[i][j+1]); 
                    break;
                default:
                    vInput[i][j-1] = toggle(n, vInput[i][j-1]); 
                    vInput[i][j] = toggle(n, vInput[i][j]); 
                    break;
            }
        }
        switch (i) {
            case 0:
                vInput[i][j] = toggle(n, vInput[i][j]); 
                vInput[i+1][j] = toggle(n, vInput[i+1][j]); 
                break;
            case 1:
                vInput[i-1][j] = toggle(n, vInput[i-1][j]); 
                vInput[i][j] = toggle(n, vInput[i][j]); 
                vInput[i+1][j] = toggle(n, vInput[i+1][j]); 
                break;
            default:
                vInput[i-1][j] = toggle(n, vInput[i-1][j]); 
                vInput[i][j] = toggle(n, vInput[i][j]); 
                break;
    }
}

int main() {
    vector<vector<int>> lights = { {1,1,1}, {1,1,1}, {1,1,1} };
    switchLights(lights);
    return 0;
}
