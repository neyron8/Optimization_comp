#include <stddef.h>
enum { N = 1024 };

int sum(int arr[N]) {
  int result = 0;
  int smth = 0;
  while(smth < 512){
    smth++;
  }
  for (size_t i = 0; i < N; ++i) {
    result += arr[i];
  }
  return result;
}