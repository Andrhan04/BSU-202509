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
#include <fstream>
#include <math.h>

using namespace std;

#define int long long
#define Fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define Card vector<string>
#define Graf vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
string yes = "YES", no = "NO", imp = "Impossible";

set<int> degit;

bool simple(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

signed main() {
    Fast;
    int cnt = 0;
    string ans;
    for (int i = 2; i < 50; i++) {
        if (simple(i)) degit.insert(i);
    }
    for (auto i : degit) {
        cout << i << endl;
        cin >> ans;
        if (ans == "yes") {
            cnt++;
            if (i <= 10) {
                cout << i * i << endl;
                cin >> ans;
                if (ans == "yes") {
                    cout << "composite" << endl;
                    return 0;
                }
            }
        }
    }
    cout << (cnt >= 2 ? "composite" : "prime") << endl;
    return 0;
}