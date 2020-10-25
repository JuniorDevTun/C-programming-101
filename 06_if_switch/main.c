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

    int day = 3;
    switch(day){

        case 1: 
            printf("Monday \n");
            break;


        case 2: 
            printf("Tuesday \n");
            break;


        case 3: 
            printf("Wednesday \n");
            break;


        case 4: 
            printf("Thursday \n");
            break;


        case 5: 
            printf("Friday \n");
            break;


        case 6: 
            printf("Saturday \n");
            break;


        case 7: 
            printf("Sunday \n");
            break;

        default: 
            printf("Invalid Number");
    }

}