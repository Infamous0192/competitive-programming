#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int i, j, n, cnt = 0;
  scanf("%d", &n);

  for (i = 1; i <= sqrt(n); i++)
    for (j = i + 1; i * j <= n; j++)
      cnt++;

  cnt += sqrt(n);
  printf("%d", cnt);
  return 0;
}