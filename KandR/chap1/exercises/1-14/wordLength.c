#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int len[26],c;

	for(int i=0;i<26;i++){
		len[i] = 0;
	}
	
	while((c = getchar()) != EOF){
		if(c >='a' && c<='z'){
			len[c-'a']++;
		}else if( c >= 'A' && c <= 'Z'){
			len[c-'A']++;
		}
	}

	for(int i=0;i<26;i++){
		char c = (char) (i+'a');
		printf("%c: %d\n",c,len[i]);
	}
	return 0;
}
