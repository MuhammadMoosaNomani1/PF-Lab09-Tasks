#include<stdio.h>
#define SIZE 5

void printArray( int *arr, int size){
	for(int i=0;i<size;i++){
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

void printArrayPointerArithmetic(int  *arr,int size){
	int *ptr=arr;
	for(int i=0;i<size;i++){
		printf("%d ", *ptr);
	ptr++;
	}
	printf("\n");
}
	

int main(){
	int arr[SIZE]= {10,20,30,40,50};
	
	printf("Array elements (using array pointer): ");
	printArray(arr, SIZE);
	
	printf("Array elements (using pointer arithmetic): ");
	printArrayPointerArithmetic(arr, SIZE);
	
	return 0;
}
