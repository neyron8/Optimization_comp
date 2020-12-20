#include <stddef.h>

int get2() { return 2; }

int foo() {
  int i = 0;
  if (get2() == 2) {
    for (int j = 0; j < 10; ++j) {
      i = get2();
    }
  } else {
    for (int j = 0; j < 40; ++j) {
      i = 2 * get2();
    }
  }
  return i;
}
