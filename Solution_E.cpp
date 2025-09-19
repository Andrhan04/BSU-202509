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
    if (a != 1) {
        if (a * a == b) {
            cout << a * b << endl;
        }
        else {
            int g = gcd(a, b);
            if (g == a) {
                cout << b * b / g << endl;
            }
            else {
                cout << (a * b) / g << endl;
            }
        }
    }
    else {
        cout << b * b << endl;
    }
}

signed main() {
    Fast;
    int n;
    cin >> n;
    while (n--) slove();
    return 0;
}