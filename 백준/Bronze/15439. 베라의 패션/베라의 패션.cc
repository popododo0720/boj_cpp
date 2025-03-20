#include <stdio.h>

#define calc(N) N*(N-1)

int main(){
	int N;
	scanf("%d",&N);
	printf("%d",calc(N));
}