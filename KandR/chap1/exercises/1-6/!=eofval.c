#include <stdio.h>

int main(){
	int c,val;
	c = getchar();

	while(c != EOF){
		c = getchar();
		printf("EOF Value: %d\n", (c != EOF));
	}
	return 0;
}
