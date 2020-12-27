#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, m, x;
		int ma = 0, mb = 0;
		scanf("%d%d", &n, &m);

		while (n--) {
			scanf("%d", &x);
			if (x > ma)
				ma = x;
		}

		while (m--) {
			scanf("%d", &x);
			if (x > mb)
				mb = x;
		}

		if ( ma >= mb ) {
			printf("Godzilla\n");
		}
		else {
			printf("MechaGodzilla\n");
		}
  }
  return 0;
}