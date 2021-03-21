#include <stdio.h>
//The main function there can only be one per program
int main(){
	//Variable declaration and definition
	float fahr, celsius;
	float lower, upper, step;
	//array to store the temps
	float far[20];
	float cel[20];
	int i=0;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
    printf("**** Temp Converter Fahrenheit to Cesius ****\n\n");	
	while(fahr <= upper){
		celsius = 5.0*(fahr-32.0)/9.0;
		//original print statement
		//printf("%d\t%d\n", fahr,celsius);
		far[i]=fahr;
		cel[i]=celsius;
		i++;
		//print statement with right justification
		printf("\t\t%3.0f %6.1f\n",fahr,celsius);
		fahr = fahr+step;
	}
	//Print the celsius to fahr conversion
    printf("**** Temp Converter Celsius to Fahrenheit ****\n\n");
	for(int j=0;j<i;j++){
		printf("\t\t%6.1f %3.0f\n",cel[j],far[j]);
	}
	return 0;
}
