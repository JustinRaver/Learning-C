#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int words, c, state;
	words = 0;
	state = OUT;

	while((c=getchar()) != EOF){
		if(c == '\n' || c == '\t' || c == ' '){
			state = OUT;	
		}else if(state == OUT){
			state = IN;
			printf("\n");
		}
		putchar(c);
	}
	return 0;
}
