#include <stdio.h>

int main(){

    int age;
    double height;
    char name[];

    printf("Type in your name : ");
    scanf("%s", name);


    printf("Type in your age : ");
    scanf("%s", &age);


    printf("Type in your height : ");
    scanf("%s", &height);


    printf("Ahla b c %s, your age is : %a and you are %.2f CM.");

    return 0;
}