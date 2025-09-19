#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <numeric>
#include <map>
#include <vector>
#include <random>
#include <queue>
#include <iomanip>
#include <math.h>

using namespace std;

#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define int long long
#define Dict vector<string>
struct edge { int cost = 0; vector<int> need; };
#define Graf vector<vector<char>>
#define all(v) (v).begin(), (v).end()
string yes = "YES", no = "NO", imp = "Impossible";
int INF = 1e9 + 7;
int n;
void Alice(Graf &g, int s_x, int s_y) {

//-------------------------------------------------------------

    for (int i = s_x; i >= 0; i--) {
        g[i][s_y] = 2;
    }
    for (int i = s_x; i < n; i++) {
        g[i][s_y] = 2;
    }

//||||||||||||||||||||||||||||||||||||||||||||||||||||||||

    for (int i = s_y; i >= 0; i--) {
        g[s_x][i] = 2;
    }
    for (int i = s_y; i < n; i++) {
        g[s_x][i] = 2;
    }

// //////////////////////////////////////////////////////////////

    for (int i = s_x, j = s_y; i < n && j < n; i++, j++) {
        g[i][j] = 2;
    }
    for (int i = s_x, j = s_y; i >= 0 && j >= 0; i--, j--) {
        g[i][j] = 2;
    }

// \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

    for (int i = s_x, j = s_y; i >= 0 && j < n; i--, j++) {
        g[i][j] = 2;
    }
    for (int i = s_x, j = s_y; i < n && j >= 0; i++, j--) {
        g[i][j] = 2;
    }
}

vector<int> dx{1, 1,  1, 0,  0, -1, -1, -1},
            dy{1, 0, -1, 1, -1,  1,  0, -1};

void Bob(Graf& g, int x, int y) {
    g[x][y] = 1;
    for (int i = 0; i < 8; i++) {
        int c_x = x + dx[i], c_y = y + dy[i];
        if (c_x < n && c_x >= 0 && c_y < n && c_y >= 0) {
            if (!g[c_x][c_y]) {
                Bob(g, c_x, c_y);
            }
        }
    }
}

signed main() {
    Fast;
    cin >> n;
    Graf g(n, vector<char>(n));
    int x, y;
    cin >> x >> y;
    g[--x][--y] = 2;
    Alice(g, x, y);
    cin >> x >> y;
    g[--x][--y] = 1;
    Bob(g, x, y);
    cin >> x >> y;
    cout << (g[--x][--y] == 1 ? yes : no) << endl;
    return 0;
}