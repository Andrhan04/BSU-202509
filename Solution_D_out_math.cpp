#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <fstream>
#include <algorithm>
#include <random>
#include <time.h>
#include <iomanip>
#include <math.h>
#include <set>
#include <vector>
#include <map>

using namespace std;

void slove() {
    int n;
    string s;
    cin >> n >> s;
    vector <string> isk{"mapie", "pie", "map"};
    int ans = 0;
    for (auto i : isk) {
        int pos = s.find(i);
        while (pos != -1) {
            s[pos + i.size() / 2] = '*';
            pos = s.find(i, pos);
            ans++;
        }
    }
    cerr << s << endl;
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) slove();

	return 0;
}