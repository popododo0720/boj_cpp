#include <stdio.h>

int main(){
	int N;
	int result=1;
	scanf("%d",&N);
	
	for(int i = 0 ; i < N ; i++) {
		result*=2;
	}

	printf("%d", result);
}