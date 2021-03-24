#include <stdio.h>

#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
	long lineLength = 0;
	int numLines = 0;
	char line[MAXLINE];
    int i =0;
	while((line[i] = getchar()) != EOF){
		if(i == (MAXLINE-3)){
			line[MAXLINE-1] = '\0';
			printf("%s",line);
			while((line[0]=getchar()) != EOF && line[0] != '\n' ){
				lineLength++;
			}
			printf("Line length of line %d: %ld\n",numLines,lineLength);
			i = 0;
		}else{
			if(line[i] == '\n'){
				numLines++;
				printf("Line length of line %d: %ld\n",numLines,lineLength);
				lineLength = 0;
				i = 0;
			}else{
				lineLength++;
				i++;
			}
		}
	}
	printf("Total lines: %d\n",numLines);
	return 0;
}

int getlines(char s[], int lim){
	int c,i;

	for(i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; i++){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[],char from[]){

	int i;
	i=0;
	while((to[i] = from[i]) != '\0'){
		i++;
	}
}

