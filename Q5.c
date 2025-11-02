#include<stdio.h>
#include<time.h>

#define SIZE 5

void generateImage( int image[SIZE][SIZE]){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			image[i][j]=rand()%256;
	}	
	}
}

void increaseBrightness( int image[SIZE][SIZE]){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			image[i][j]=(image[i][j]+20>255)? 255: image[i][j]+20;
			}	
		}
}

void displayImage(int image[SIZE][SIZE], char *message){
	printf("%s:\n", message);
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			printf("%3d ", image[i][j]);
			}	
			printf("\n");
		}
}
int main(){
	srand(time(NULL));
	int originalImage[SIZE][SIZE];
	int brightenedImage[SIZE][SIZE];
	
	generateImage(originalImage);
	
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			brightenedImage[i][j]=originalImage[i][j];
			}		
		}
		increaseBrightness(brightenedImage);
		
		displayImage(originalImage, "Original Image");
		displayImage(brightenedImage, "Brightened Image");
		
	return 0;
}
