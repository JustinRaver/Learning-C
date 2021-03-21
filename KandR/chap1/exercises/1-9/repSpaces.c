#include <stdio.h>

int main(){
	int c;
	int spaceCount = 0;

	while((c = getchar()) != EOF){
		if(c != ' '){
			putchar(c);
			spaceCount = 0;
		}else{
			spaceCount++;
			if(spaceCount <= 1){
				putchar(c);
			}
		}
	}
	return 0;
}	
