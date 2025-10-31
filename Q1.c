#include<stdio.h>
void decimalToBinary(int decimal,char* binaryStr);
int main(){
	int decimal;
	char binary[50];
	
	printf("Enter your decimal access code: ");
	scanf("%d", &decimal);
	
	decimalToBinary(decimal, binary);
	
	printf("Binary Equivalent: %s\n", binary);
	return 0;
}

void decimalToBinary(int decimal,char*binaryStr){
	int i=0;
	while(decimal>0){
		binaryStr[i]=(decimal%2)+'0';
		decimal=decimal/2;
		i++;
	}
	binaryStr[i]='\0';
	
	int start=0, end=i-1;
	while (start<end){
		char temp=binaryStr[start];
		binaryStr[start]=binaryStr[end];
		binaryStr[end]=temp;
		start++;
		end--;
	}
}
