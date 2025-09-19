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
    int n;
    cin >> n;
    vector<int> v2, v1;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        if (a & 1) {
            v1.push_back(a);
        }
        else {
            v2.push_back(a);
        }
    }
    for (int i = 1; i < v1.size(); i++) {
        if (v1[i - 1] > v1[i]) {
            cout << no << endl;
            return;
        }
    }
    for (int i = 1; i < v2.size(); i++) {
        if (v2[i - 1] > v2[i]) {
            cout << no << endl;
            return;
        }
    }
    cout << yes << endl;
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