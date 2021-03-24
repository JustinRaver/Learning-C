#include <stdio.h>

void processInput();
char* removeBlanks(char *a,int end);

int main(){
	processInput();
	return 0;
}


void processInput(){
	char c[1000];
	
	int i=0;
	while((c[i] = getchar()) != EOF){
		if(c[i] == '\n'){
			c[i+1] = '\0';
			if(i != 0){
				printf("%s",removeBlanks(c,i));
				i = 0;
			}
		}else{
			i++;
		}
	}
}

char* removeBlanks(char *a,int end){
	while(a[end] == ' ' | a[end] == '\t'){
		a[end] = '\0';
		end--;
	}
	return a;
}

