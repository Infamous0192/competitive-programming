#include <iostream>

using namespace std;

int main () {
  int T;
  scanf("%d", &T);
  while (T--) {
    int start;
    int end;
    scanf(" %d %d", &start, &end);
    printf("\n");
    if (start < 2) start = 2;
    for (int i = start; i <= end; i++) {
      bool isPrime = true;
      for (int j = 2; j < (i / 2) + 1; j++) {
        if (i % j == 0) {
          isPrime = false;
          break;
        }
      }
      if (isPrime) {
        printf("%d\n",i);
      }
    }
  }
  return 0;
}