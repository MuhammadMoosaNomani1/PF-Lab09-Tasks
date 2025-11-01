#include<stdio.h>
int stringLength(const char *str){
	int length=0;
	const char *ptr =str;
	while(*ptr != '\0'){
		length++;
		ptr++;
	}
	return length;
}
int main(){
	char input[256]; 
	printf("Enter a String: ");
	if(!fgets(input, sizeof(input), stdin)){
	printf("Error Reading input.\n");
	return 1;
	}
	for(int i=0;input[i]!='\0';i++){
		if(input[i]=='\n'){
			input[i]='\0';
			break;
		}
	}
	int len= stringLength(input);
	printf("The length of the string is: %d\n", len);
	return 0;
}
