#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int array[10];
	int a;
	srand(time(NULL));
	printf("print array.\n");
	
	for(a = 0; a <= 9; a++){
		array[a] = rand();
	}
	
	array[9] = 0;
	
	for(a = 0; a <= 9; a++){
		printf("%d\n",array[a]);
	}
	
	int brray[10];
	int *b = array;
	int *c = brray;
	
	//assign value using the pointer.
	b += sizeof(array)/sizeof(array[0]) - 1;
	for(a = 9; a >= 0; a--){
		*c = *b;
		c++;
		b--;
	}

	printf("print reverse array.\n");
	
	//print brray from index 0 to 9
	for(a = 0; a <= 9; a++){
		printf("%d\n",brray[a]);
	}

	return 0;
}
