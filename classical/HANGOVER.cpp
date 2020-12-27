#include <stdio.h>

int main() {
  float c;
  scanf("%f", &c);
  while (c) {
    float len = 0.00;
    int n = 0;
    while (len < c) {
      n++;
      len += 1.00 / (1.00 + n);
    }
    printf("%d card(s)\n", n);
    scanf("%f", &c);
  }
  return 0;
}