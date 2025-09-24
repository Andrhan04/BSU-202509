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

void slove() {
    int a, b;
    cin >> a >> b;
    if (a == 1) {
        cout << b * b << endl;
    }
    else {
        int g = gcd(a, b);
        cout << ((g == a) ? (b * b / g) : (a * b / g)) << endl;
    }
}

signed main() {
    Fast;
    int n;
    cin >> n;
    while (n--) slove();
    return 0;
}