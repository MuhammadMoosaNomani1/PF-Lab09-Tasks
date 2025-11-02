#include<stdio.h>

int factorial(int n){
	if(n==0 || n==1){
		return 1;
	} else {
		return n* factorial(n-1);
	}
	
}

void getFactorial(int n, int*result){
	*result = factorial(n);
}

int main(){
	int N;
	printf("Enter a non-negative integer: ");
	scanf("%d", &N);
	
	if(N<0) {
		printf("Factorial is not defined for negative numbers.\n");
		return 1;
	}

int result;
getFactorial(N, &result);

printf("%d! = %d\n", N, result);
	return 0;
}
