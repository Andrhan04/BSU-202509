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

#define int long long
#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Card vector<string>
#define Graf vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
string yes = "YES", no = "NO", imp = "Impossible";

void slove() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 2; i < n; i++) {
        if (s[i - 2] == 'm' && s[i - 1] == 'a' && s[i] == 'p') {
            ans++;
        }
        if (s[i - 2] == 'p' && s[i - 1] == 'i' && s[i] == 'e') {
            ans++;
        }
        if (i + 2 < n && s[i - 2] == 'm' && s[i - 1] == 'a' && s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
            ans--;
        }
    }
    cout << ans << endl;
}

signed main() {
    Fast;
    int t;
    cin >> t;
    while (t--) slove();
    return 0;
}