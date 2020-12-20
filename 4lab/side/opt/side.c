#include <stddef.h>
enum { N = 1024 };

int call_it(){
	int check = 7;
	check++;
	return check;
}


int sum() {
  int result = 0;
  int x = 10;
  for (size_t j = 0; j < 1000; j++) {
    //call_it();
    ++x;
  }
  return result;
}