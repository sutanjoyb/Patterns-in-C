#include <stdio.h>
int main(){
	int i, j, space;
	int rows = 5;
	int coeff;
	for (i = 0; i < rows; i++){
		coeff = 1;
		for (space = rows - i; space > 0; space--){
			printf(" ");
		}
		for (j = 0; j <= i; j++){
			printf("%d ", coeff);
			coeff = coeff * (i - j) / (j + 1);
		}
		printf("\n");
	}
return 0;
}
