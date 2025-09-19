#include <iostream>
#include <iomanip>
#include <math.h>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <list>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <numeric>
#include <functional>

using namespace std;
string yes = "YES", no = "NO";
#define int long long
#define Fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(v) (v).begin() , (v).end()
#define para pair<long long,long long>
#define Graf vector<vector<int>>
const int INF = 1e9 + 7;

int binpow(int a, int n) {
	if (n == 1) return a;
	if (n == 0) return 1;
	int h = binpow(a, n / 2);
	if (n & 1) {
		return ((h * h) % INF * a) % INF;
	}
	else {
		return (h * h) % INF;
	}
}

signed main() {
#pragma comment(linker, "/STACK:256000000")
	Fast;
	int t = 6;
	cin >> t;
	vector<int> n(t), k(t);
	for (auto& i : n) cin >> i;
	for (auto& i : k) cin >> i;

	for (int i = 0; i < t; i++) {
		if (k[i] == n[i]) {
			cout << 1 << endl;
		}
		else {
			cout << binpow(2, k[i]) << endl;
		}
	}

	return 0;
}