#include <stdio.h>
#include "parity.h"


int main(){	
	
	int array[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1,};
	int item = 0;
	
	insertToParityArray(array, item);
	printParityArray(array);
  	
	return 0;
}