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
	int L[8][8];
	char X[] = "abacate";
	char Y[] = "abacaxi";
	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			L[i][j]=0;
		}
	}
	for(i=0; i<8; i++){
		for(j=0; j<8; j++){
			if(X[i] == Y[j]){
				L[i+1][j+1] = L[i][j]+1;
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
