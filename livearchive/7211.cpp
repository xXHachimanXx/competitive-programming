#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back

#define db(x) cerr << #x << " == " << x << endl
#define dbs(x) cerr << x << endl
#define _ << ", " <<

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

const int INF = 0x3f3f3f3f, MOD = 1e9+7;

int t, a;

int main() {
  while (~scanf("%d", &t)) {
    int c = 0;
    for (int i = 0; i < 5; ++i) scanf("%d", &a), c+=a==t;
    printf("%d\n", c);
  }
  return 0;
}