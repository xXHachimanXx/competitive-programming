#include <cstdio>
#include <cmath>

int d[100];

unsigned long p[39] = {
  1,
  4,
  9,
  121,
  484,
  10201,
  12321,
  14641,
  40804,
  44944,
  1002001,
  1234321,
  4008004,
  100020001L,
  102030201L,
  104060401L,
  121242121L,
  123454321L,
  125686521L,
  400080004L,
  404090404L,
  10000200001L,
  10221412201L,
  12102420121L,
  12345654321L,
  40000800004L,
  1000002000001L,
  1002003002001L,
  1004006004001L,
  1020304030201L,
  1022325232201L,
  1024348434201L,
  1210024200121L,
  1212225222121L,
  1214428244121L,
  1232346432321L,
  1234567654321L,
  4000008000004L,
  4004009004004L
};

int main()
{
  int t;
  scanf("%d", &t);

  unsigned long a, b, me, ma, c;
  for (int i = 1; i <= t; ++i)
  {
    printf("Case #%d: ", i);

    scanf("%ld%ld", &a, &b);

    me = 0;
    while (me < 39 && p[me] < a)
      me++;

    ma = 38;
    while (p[ma] > b)
      ma--;

    c = ma - me + 1;

    printf("%ld\n", c);
  }

  return 0;
}
