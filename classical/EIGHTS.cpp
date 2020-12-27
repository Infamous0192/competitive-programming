#include <iostream>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long int k;
    scanf("%lld", &k);
    cout << (192 + (k-1)*250) << endl;
  }
  return 0;
}