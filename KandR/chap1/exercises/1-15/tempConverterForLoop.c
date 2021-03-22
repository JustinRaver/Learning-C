#include <stdio.h>

void fahrtocels(int lower,int upper, int step);

int main(){
	int upper,lower,step;
	upper = 300;
	lower = 0;
	step = 10;
	fahrtocels(lower,upper,step);
	return 0;
}

void fahrtocels(int lower, int upper, int step){
	for(int fahr=lower; fahr<=upper; fahr+=step){
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}

