#include <stdio.h>

int main(){
	int line,blanks,tabs = 0;
	int c;

	while((c=getchar()) != EOF){
		switch(c){
			case '\n':
				line++;
				break;
			case '\t':
				tabs++;
				break;
			case ' ':
				blanks++;
				break;
			default:
				break;
		}
	}
	printf("Blanks: %d\n Tabs: %d\n Newline: %d\n",blanks,tabs,line);
	return 0;
}
