#include <bits/stdc++.h>
using namespace std;


int ans = 0;
string path;
vector<vector<bool>> visited(9, vector<bool>(9, false));

void recurs(int idx, int row, int column) {
    if (row == 7 && column == 1) {
        if (idx == 48) ans++;
        return;
    }
    if (idx == 48) {
        return;
    }
    if (visited[row + 1][column] && visited[row - 1][column] && (!visited[row][column - 1] && !visited[row][column + 1])) {
        return;
    }
    if (visited[row][column - 1] && visited[row][column + 1] && (!visited[row + 1][column] && !visited[row - 1][column])) {
        return;
    }
    visited[row][column] = true;
    if (path[idx] == 'R') {
        if (!visited[row][column + 1]) {
            recurs(idx + 1, row, column + 1);
        }
    } else if (path[idx] == 'L') {
        if (!visited[row][column - 1]) {
            recurs(idx + 1, row, column - 1);
        }
    } else if(path[idx] == 'U') {
        if (!visited[row - 1][column]) {
            recurs(idx + 1, row - 1, column);
        }
    } else if (path[idx] == 'D') {
        if (!visited[row + 1][column]) {
            recurs(idx + 1, row + 1, column);
        }
    } else {
        if (!visited[row][column + 1]) {
            recurs(idx + 1, row, column + 1);
        }
        if (!visited[row][column - 1]) {
            recurs(idx + 1, row, column - 1);
        }
        if (!visited[row + 1][column]) {
            recurs(idx + 1, row + 1, column);
        }
        if (!visited[row - 1][column]) {
            recurs(idx + 1, row - 1, column);
        }
        
    }
    visited[row][column] = false;
}


int main() {
    cin >> path;
    for (int i = 0; i < 9; ++i) {
        
        visited[i][0] = 1;
        visited[0][i] = 1;
        visited[i][8] = 1;
        visited[8][i] = 1;
    }
    recurs(0, 1, 1);
    cout << ans;
}