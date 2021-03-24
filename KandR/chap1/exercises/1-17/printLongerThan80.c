#include <stdio.h>

void printOver80();

int main(){
	printOver80();
	return 0;
}


void printOver80(){
	char c[1000];
	
	int i=0;
	while((c[i] = getchar()) != EOF){
		if(c[i] == '\n'){
			if(i>80){
				c[i+1] = '\0';
				printf("%s",c);
			}
			i = 0;
		}else{
			i++;
		}
	}
}
