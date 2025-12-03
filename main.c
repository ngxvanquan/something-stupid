#include <stdio.h>

int main() {	
	long myNumbers[] = {123452345, 5, 3, 6, 3, 5};
	int arrayLength = sizeof(myNumbers) / 4;
	printf("%l\n", myNumbers[1]);
	printf("size of this array is %zu\n", sizeof myNumbers);
	printf("size of first element array is %zu\n", sizeof myNumbers[0]);
	printf("length of array is: %d\n", arrayLength);

	return 0;
}
