#include <stdio.h>
int main(){
	int i, j, space;
	int rows = 5;
	for (i = 1; i <= rows; i++){
		for (space = rows - i; space > 0; space--){
			printf("  ");
		}
		for (j = 1; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
return 0;
}
