#include <iostream>
using namespace std;

int main() {
  int a1, a2, a3;
  scanf("%d %d %d", &a1, &a2, &a3);
    while (a1||a2||a3) {
      if (a2 - a1 == a3 - a2) {
        printf("AP %d\n", a3 + (a2 - a1));
      } else {
        printf("GP %d\n", a3 * (a2 / a1));
      }
      scanf("%d %d %d", &a1, &a2, &a3);
    }
    return 0;
  }
  
