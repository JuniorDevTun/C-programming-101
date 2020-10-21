#include <stdio.h>

int main(){

    int givenSeconds;

    int hours;
    int min;



    printf("Type in the number of seconds : ");
    scanf("%d", &givenSeconds);

    hours = givenSeconds/3600;
    


    printf("H : %d", hours);

    return 0;
}