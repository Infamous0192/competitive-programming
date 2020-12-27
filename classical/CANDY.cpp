#include <iostream>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  while (N != -1) {
    int packet[N];
    int sum = 0;
    int candy;
    for (int i = 0; i < N; i++) {
      scanf("%d", &candy);
      sum += candy;
      packet[i] = candy;
    }
    if (sum % N == 0) {
      int each = sum / N;
      int count = 0;
      for (int i = 0; i < N; i++) {
        if (packet[i] < each) {
          count += each - packet[i];
        }
      }
      cout << count << endl;
    } else {
      cout << -1 << endl;
    }
    scanf("%d", &N);
  }
  return 0;
}