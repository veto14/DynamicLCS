#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int x, int y){
	if(x > y){
		return x;
	}
	else{
		return y;
	}
}

int main(){
	int i,j;
	int L[9][9];
	char X[] = "puaosex";
	char Y[] = "puesex";
	int pesoX[] = {1,2,3,4,5,6,7};
	int pesoY[] = {1,2,3,4,5,6};
	for(i = 0; i < 9; i++){
		for(j = 0; j < 9; j++){
			L[i][j]=0;
		}
	}
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if(X[i] == Y[j]){
				L[i+1][j+1] = L[i][j]+ pesoX[i];
			}
			else{
				L[i+1][j+1] = max(L[i][j+1], L[i+1][j]);
			}
		}
	}
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			printf("%d ",L[i][j]);
		}
		printf("\n");
	}
}
