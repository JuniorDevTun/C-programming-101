#include<stdio.h>

void main(){
	
	// Array initialized with ints
	int numbers[] = {1, 2, 3, 4, 5};

	printf("%d \n", numbers[2]);
	numbers[2] = 10;
	printf("%d \n", numbers[2]);
	
	
	// Declaring an array and filling it manually 
	int numbers2[3];
	
	numbers2[0] = 12;
	numbers2[1] = 4;
	numbers2[2] = 3;

	// Filling an array using For Loop
	int numbers3[4];
	int i;
	for(i=0; i<4; i++){
		printf("Type in a number : ");
		scanf("%d", &numbers[i]);
	}

	// Displaying an array using For loop
	int j;
	for(j=0; j<4; j++){
		printf("numbers [ %d ] : %d \n", j, numbers[j]);
	}
}
