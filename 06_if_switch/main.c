#include <stdio.h>

void main(){

    if ( 1 > 2 ){
        printf("The condition is TRUE \n");
    }else{
        printf("The condition is FALSE \n");
    }
    

    printf("Type in your age : ");
    int age;
    scanf("%d", &age)
    
    if ( age >= 18){
        printf("age >= 18 \n");
    }else if (age <=16){
        printf("16 <= age < 18 \n");
    }else{
        printf("age < 16");
    }


}