#include <iostream>
using namespace std;

int main() {
  int N, flag;
  int A[100001];
  while (cin >> N) {
    if (N == 0)
      return 0;
    for (int i = 1; i <= N; i++)
      cin >> A[i];
    flag = 1;
    for (int i = 1; i <= N; i++) {
      if (A[A[i]] != i) {
        flag = 0;
        break;
      }
    }
    if (flag)
      cout << "ambiguous" << endl;
    else
      cout << "not ambiguous" << endl;
  }
}