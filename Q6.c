#include<stdio.h>
#include<stdlib.h>
void getMatrixDimensions(int *rows, int *cols){
	printf("Enter number of Rows: ");
	scanf("%d", rows);
	printf("Enter number of Columns: ");
	scanf("%d", cols);
}

void inputMatrix(int *matrix, int rows, int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("Enter element [%d][%d]: ", i+1, j+1);
			scanf("%d", matrix+i * cols+ j);
		}
	}
}

void displayMatrix(int *matrix, int rows, int cols){
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ", *(matrix + i * cols + j));
		}
		printf("\n");
	}
}

void multiplyMatrices( int *matrix1, int *matrix2, int *result, int rows1, int cols1, int cols2){
	for(int i=0; i<rows1;i++){
		for(int j=0; j<cols2;j++){
			*(result + i * cols2 +j) = 0;
			for(int k=0; k<cols1; k++){
				*(result + i * cols2 + j) +=  *(matrix1 + i * cols1 + k)* *(matrix2 + k * cols2 + j); 
			}
		}
	}
}
int main(){
	int rows1,rows2,cols1,cols2;
	
	printf("Enter dimensions of Matrix 1:\n");
	getMatrixDimensions(&rows1,&cols1);
	
	printf("Enter dimensions of Matrix 2:\n");
	getMatrixDimensions(&rows2,&cols2);
	
	if(cols1!=rows2){
		printf("Matrices cannot be multiplied.\n");
		return 1;
	}
	
	int matrix1[rows1][cols1];
	int matrix2[rows2][cols2];
	int result[rows1][cols2];
	
	printf("Enter elements of Matrix 1: \n");
	inputMatrix((int *)matrix1, rows1, cols1);
	
	printf("Enter elements of Matrix 2: \n");
	inputMatrix((int *)matrix2, rows2, cols2);
	
	printf("Matrix 1: \n");
	displayMatrix((int *)matrix1, rows1, cols1);
	
	printf("Matrix 2: \n");
	displayMatrix((int *)matrix2, rows2, cols2);
	
	multiplyMatrices((int *)matrix1, (int *)matrix2, (int *)result, rows1, cols1, cols2);
	
	printf("Resultant Matrix:\n");
	displayMatrix((int *)result, rows1,cols2);
	
	return 0;
}
