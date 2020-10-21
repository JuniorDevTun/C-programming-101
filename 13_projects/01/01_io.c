#include <stdio.h>

int main(){

    int givenSeconds;
    int hours;
    int min;
    int sec;
    
    // Getting the user input
    printf("Type in the number of Seconds : ");
    scanf("%d", &givenSeconds);
    
	// calculating the Hours, Minutes & Seconds    
    hours = givenSeconds / 3600;
    min = (givenSeconds % 3600 ) /60;
    sec = givenSeconds % 60;
    
    //Displaying the result
    printf("H : %d, M : %d, S : %d", hours, min, sec);
    

    return 0;
}