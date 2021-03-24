#include <stdio.h>

void printi();

int main(){
	int i=0;
	//prints this local i
	printf("i in main: %d\n",i);
	//prints the variable i local to the function which == 1234
	printi();

	return 0;
}

void printi(){
	int i=1234;
	printf("i in print i: %d\n",i);
}
