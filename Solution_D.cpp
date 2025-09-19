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

typedef long long ll;
#define int long long
#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Dict vector<string>
#define Graf vector<vector<edge>>
#define all(v) (v).begin(), (v).end()
string yes = "YES", no = "NO", imp = "Impossible";

int calc(vector<int>&arr, int h) {
    int cnt = 0;
    for (auto i : arr) {
        cnt += max(h - i, (int)0);
    }
    return cnt;
}

int binfind(int mx, vector<int>&arr) {
    int l = 0, r = *max_element(all(arr)) + mx;
    while (l + 1 < r) {
        int m = (l + r) / 2;
        if (calc(arr, m) > mx) {
            r = m;
        }
        else {
            l = m;
        }
    }
    return ((calc(arr, r) > mx) ? l : r);
}

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    for (auto& i : arr) cin >> i;
    cout << binfind(x,arr) << endl;
}

signed main() {
    Fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}