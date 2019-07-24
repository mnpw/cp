#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define repr(i, n) for (int i = (n) - 1; i >= 0; i--)

using namespace std;
using ll = long long;

int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<double> a(n);
  ll s = 0;
  vector<int> ans(n);
  rep(i, n) {
    cin >> a[i];
    ans[i] = floor(a[i]);
    s += ans[i];
  }
  rep(i, n) {
    if (s < 0) {
      s -= ans[i];
      ans[i] = ceil(a[i]);
      s += ans[i];
    }
  }
  rep(i, n) cout << ans[i] << '\n';
}