#include <stdio.h>

struct Karahba{	
	char mark[20];
	int numDoors;
	double weight;
};

int main(){
	
	struct Karahba k;
	
	strcpy(k.mark, "BMW");
	k.numDoors = 4;
	k.weight = 12.05;
	
	printf("Ur car is %s, it has %d doors & it weights %.2f", k.mark, k.numDoors, k.weight);
	
    return 0;
}