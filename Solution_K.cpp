#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <numeric>
#include <map>
#include <unordered_map>
#include <vector>
#include <random>
#include <queue>
#include <iomanip>
#include <math.h>

using namespace std;

#define int long long
#define ull unsigned long long
#define Graf vector<vector<long long>>
#define all(v) (v).begin(), (v).end()


void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string s;
	for (int i = 1; i <= 12; i++) {
		if (i == a || i == b) {s += "a";}
		if (i == c || i == d) {s += "b";}
	}
	cout << (s == "abab" || s == "baba" ? "YES\n" : "NO\n");
}

void solve_1() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (max(a, b) > max(c, d)) {
        if (min(a, b) < max(c, d) && min(a,b) > min(c,d)){
            cout<< "YES";
        }
        else {
            cout<<"NO";
        }
    }
    else {
        if (min(c,d) < max(a,b) && min(c,d) > min(a,b)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
}

signed main() {
    int n = 1;
    cin >> n;
    while (n--) {
        solve();
        cout << endl;
    }
}

/*


*/