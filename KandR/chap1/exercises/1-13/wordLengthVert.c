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
				len[count+1]++;
			}
			count = 0;
		}else if(state == OUT){
			state = IN;
			count++;
		}else{
			count++;
		}
	}
	//get the max so that we can print the columns
	int max = 0;
	for(int i=0;i<25;i++){
		if(len[i]>max){
			max = len[i];
		}	
	}

	//iterate max times through len to print cols
	for(int i=max;i>0;i--){
		for(int j=0;j<25;j++){
			if(len[j] >= i){
				printf(j<=10?"- ":" - ");
			}
		}
		printf("\n");
	}

	//prints the bottom numbers from 1-25
	for(int i=1;i<25;i++){
		printf("%d ",i);
	}
	return 0;
}
