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



void slove() {
    string s;
    cin >> s;
    for (auto& i : s) {
        if (i == 'q') {
            i = 'p';
        }
        else {
            if (i == 'p') {
                i = 'q';
            }
        }
    }
    reverse(all(s));
    cout << s << endl;
}

signed main() {
    Fast;
    int t;
    cin >> t;
    while (t--) {
        slove();
    }
    return 0;
}