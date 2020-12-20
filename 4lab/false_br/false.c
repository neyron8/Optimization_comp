#include <stddef.h>


int foos(int x) {
	int result = 0;
	if(x) {
		for(int i = 0; i < 100; i++){
			result += 20;
		}
	} else {
		for(int j = 0; j < 50; j++){
			result += 10;
		}
	}
    return result;
}

void call_it(){
	foos(1);
}
