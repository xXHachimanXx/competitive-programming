#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))

#define db(x) cerr << #x << " == " << x << endl
#define dbs(x) cerr << x << endl
#define _ << ", " <<

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

const ld EPS = 1e-9, PI = acos(-1.);
const int INF = 0x3f3f3f3f, MOD = 1e9+7;
const int N = 1e3+5;

int n, c, s, x;

int main() {
  scanf("%d%d%d", &n, &c, &s);
  int pos = 1, ans = pos==s;
  for (int i = 0; i < c; ++i) {
    scanf("%d", &x);
    pos += x;
    if (pos < 1) pos = n;
    if (pos > n) pos = 1;
    ans += pos==s;
  }

  printf("%d\n", ans);

  return 0;
}
