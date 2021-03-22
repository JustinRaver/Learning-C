#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int len[25],c, state,count;
	state = count = 0;

	for(int i=0;i<25;i++){
		len[i] = 0;
	}
	
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;

			if(count > 0){
				len[count]++;
			}
			count = 0;
		}else if(state == OUT){
			state = IN;
			count++;
		}else{
			count++;
		}
	}
	
	for(int i=1;i<25;i++){
		printf("%d: ",i);
		for(int j =0;j<len[i];j++){
			printf("-");
		}
		printf("\n");
	}
	return 0;
}
