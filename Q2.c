#include<stdio.h>
void swapArrays(int *a, int *b, int size);
int main(){
	int Lahore[]={11,22,33,44,55};
	int Karachi[]={66,77,88,99,100};
	int size=5;
	
	printf("Before Swapping: \n");
	printf("Lahore: ");
	for(int i=0;i<size;i++){
		printf("%d ", Lahore[i]);
	}
		printf("\nKarachi: ");
	for(int i=0;i<size;i++){
		printf("%d ", Karachi[i]);
	}
	swapArrays(Lahore, Karachi, size);
	
	printf("\n\nAfter Swapping: \n");
	printf("Lahore: ");
	for(int i=0;i<size;i++){
		printf("%d ", Lahore[i]);
	}
	printf("\nKarachi: ");
	for(int i=0;i<size;i++){
		printf("%d ", Karachi[i]);
	}
	return 0;
}

void swapArrays(int *a, int *b, int size){
	int temp;
	for(int i=0;i<size;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
}
