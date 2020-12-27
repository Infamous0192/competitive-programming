#include <iostream>

using namespace std;

int reverse(int num) {
  int reversed = 0;
  while (num > 0) {
    reversed = reversed * 10 + (num % 10);
    num /= 10;
  }
  return reversed;
}

int main() {
  int N;
  scanf("%d", &N);
  while (N--) {
    int a, b;
    scanf("%d %d", &a, &b);
    cout << reverse(reverse(a) + reverse(b)) << endl;
  }
  return 0;
}