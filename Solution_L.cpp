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
int n,m;
vector<int> dx{ 1,-1,0,0 }, dy{0,0,1,-1};
bool color(vector<string>& g, int x, int y) {
    for (int i = 0; i < 4; i++) {
        int c_x = x + dx[i], c_y = y + dy[i];
        if (c_x >= 0 && c_x < n && c_y >= 0 && c_y < m) {
            if (g[c_x][c_y] == 'W') {
                return false;
            }
        }
    }
    return true;
}

signed main() {
    Fast;
    cin >> n >> m;
    vector<string> g(n);
    for (auto& i : g) cin >> i;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == 'S' && !color(g,i,j)) {
                cout << no << endl;
                return 0;
            }
            else {
                if (g[i][j] == '.') {
                    g[i][j] = 'D';
                }
            }
        }
    }
    cout << yes << endl;
    for (auto i : g) cout << i << endl;
    return 0;
}