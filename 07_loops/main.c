#include <stdio.h>

void main(){

    int i;
    for ( i = 0; i < 10; i++){

        printf("I : %d \n", i);

    }

    int y = 0;
    while ( y != 10) {
        printf("Y : %d \n", y);
        y++;
    }

    

    int age;
	
	do{
		printf("Type in Your age : ");
		scanf("%d", &age);
	}while(age <= 0);
	
	printf("You are : %d years old.", age);
}