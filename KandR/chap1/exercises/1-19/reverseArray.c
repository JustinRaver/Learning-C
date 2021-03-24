#include <stdio.h>

void processInput();
char* reverseArray(char *a,int end);
void swap(char *a,int start,int end);

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
				printf("%s\n",reverseArray(c,i));
				i = 0;
			}
		}else{
			i++;
		}
	}
}

char* reverseArray(char* a,int end){
	int start = 0;
	while(start<end){
		swap(a, start,end);
		start++;
		end--;
	}
	return a;
}

void swap(char* a,int start,int end){
	char temp = a[start];
	a[start] = a[end];
	a[end] = temp;
}
