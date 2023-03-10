#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;

ll min(ll a, ll b) { 
    return a > b ? b : a;
}
ll result(ll a, ll b, ll x, ll y, ll n) {
  ll sub1 = a - x;
  ll sub2 = b - y;
  ll res1 = min(sub1, n);
  a -= res1;
  n -= res1;
  ll res2 = min(sub2, n);
  b -= res2;
  n -= res2;
  ll ans = (a * b);
  return ans;
}
int main() {
  ll t, a, b, x, y, n;
  cin >> t;
  while (t--) {
    cin >> a >> b >> x >> y >> n;
    ll n1 = result(a, b, x, y, n);
    ll n2 = result(b, a, y, x, n);
    ll ans = min(n1, n2);
    cout << ans << endl;
  }
}