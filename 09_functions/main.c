#include<stdio.h>

// Function That prints Hi There into the console
void hi(){
    printf("Hi there ! \n");
}

// Function that uses Parameters
void marhbe(char name[]){
    printf("Marhbe %s, nawert l Console. \n", name);
}

// Function that Returns int
int somme(int x, int y){

    int result = x+y;
    return result;

    //return x+y;
}

// Function fiha test return
void retrn(){

    printf("==BEFORE RETURN==");
    return;
    printf("==AFTER RETURN==");
}

// MAIN FUNCTION
void main(){
	
	hi();
    marhbe("Junior");
    printf("The sum of 5 & 2 is : %d \n", somme(5, 2));
    retrn();

}