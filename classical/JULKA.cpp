#include <iostream>
using namespace std;

int main() {
  int t = 3;
  long long sum, more, a;
  while (t--) {
    scanf("%lld\n%lld", &sum, &more);
    a = (sum - more) / 2;
    printf("%lld\n%lld\n", (a + more), a);
  }
  return 0;
}