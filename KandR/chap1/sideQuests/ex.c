#include <stdio.h>

void f();
/*
int main(){

int j =0; //call me j1

printf("j1: %d\n",j);

for(int j=0;j<10;j++){
	j; // call me j2
	//here j1 is live but not in scope
	//j2 is live and in scope
	printf("j2: %d\n",j);
}
	//j1 is in scope again
	printf("j1: %d\n",j);
	return 0;
}

*/


void f(){
	int j = 25;
	printf("f(): %d\n",j);
}


int main(){
	int i=0;

	f();

	if(i==0){
		int i =10;
		printf("in the if: %d\n",i);
	}
	printf("in main: %d\n", i);
	return 0;
}
