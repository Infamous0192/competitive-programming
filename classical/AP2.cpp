#include <iostream>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long int f, l, sum;
    scanf("%lld%lld%lld", &f, &l, &sum);
    long long int n = (2 * sum) / (f + l);
    printf("%lld\n", n);
    long long int d = (l - f) / (n - 5);
    long long int a = f - 2 * d;
		for (int i = 0; i < n; i++) {
      printf("%lld " , a);
			a += d;
		}
		printf("\n");
  }
  return 0;
}