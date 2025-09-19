#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
#include<iomanip>
#include<numeric>


using namespace std;

#define int long long
#define ull unsigned long long
#define Graf vector<vector<long long>>
#define all(v) (v).begin(), (v).end()
int INF = 1e9 + 7;
string yes = "YES", no = "NO", imp = "Impossible";

vector<int> simple_nums;
void solve() {
    int n;
    cin >> n;
    //cout << (int)ceil(n / 4) + (bool)(n%4);
    int cnt = 0;
    int num = n;
    while (n>=4) {
        cnt++;
        n /= 4;        
        //cout << n << " ";
    }
    //cout << endl;
    cout <<(int) pow(2,cnt);
}

signed main() {    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}

/*



*/