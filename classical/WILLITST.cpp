#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
  long long int n, power = 2;
  scanf("%lld", &n);
  for (int i = 0; power < n; i++) {
    power = pow(2, i);
  }
  if (power == n) printf("TAK\n");
  else printf("NIE\n");
  return 0;
}