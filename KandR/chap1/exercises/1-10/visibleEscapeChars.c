#include <stdio.h>

int main(){
	int c;
	while((c=getchar()) != EOF){
		switch(c){
			case '\t':
				putchar('\t');
				break;
			case '\\':
				putchar('\\');
				break;
			case '\b':
				putchar('\b');
				break;
			default:
				putchar(c);
				break;
		}
	}
	return 0;
}
