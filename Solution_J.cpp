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

void prov(vector<int>& temp) {
    map<char, int> alf;
    map<int, char> rev;
    int n = temp.size();
    string s;
    cin >> s;
    int i = 0;
    for (auto c : s) {
        if (i >= n) {
            cout << "NO" << endl;
            return;
        }
        if (alf.find(c) != alf.end() && (alf[c] != temp[i] || rev[temp[i]] != c)) {
            cout << "NO" << endl;
            return;
        }
        else {
            if (alf.find(c) == alf.end()) {
                if (rev.find(temp[i]) != rev.end()) {
                    cout << "NO" << endl;
                    return;
                }
                else {
                    alf[c] = temp[i];
                    rev[temp[i]] = c;
                }
            }
        }
        i++;
    }
    cout << ((i == n) ? "YES" : "NO") << endl;
    return;
}

void slove() {
    int n, m;
    cin >> n;
    vector<int> temp(n);
    for (auto& i : temp) cin >> i;
    cin >> m;
    while (m--) prov(temp);
}

signed main() {
    Fast;
    int t;
    cin >> t;
    while (t--) slove();
    return 0;
}