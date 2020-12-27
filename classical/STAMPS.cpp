#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  for (int scenario = 1; scenario <= t; scenario++) {
    int n, f, i;
    scanf("%d %d", &n, &f);
    int arr[f];
    for (i = 0; i < f; i++) {
      scanf("%d", &arr[i]);
    }
    sort(arr, arr+f, greater<int>());
    int badge = 0, min = 0;
    for (i = 0; i < f; i++) {
      badge += arr[i];
      min++;
      if (badge >= n) break;
    }
    printf("Scenario #%d:\n", scenario);
    if (badge >= n) printf("%d\n", min);
    else printf("impossible\n");
  }
  return 0;
}