#include<stdio.h>
#include<ctype.h>
#include<string.h>
int areAnagrams(const char *s1,const char *s2){
	int freq[256]={0};
	const unsigned char *p;
	p= (const unsigned char *) s1;
	while(*p){
		unsigned char ch= *p;
		if(isalpha(ch)){
		
		if(ch!= ' ')
			ch = (unsigned char)tolower(ch);
			freq[ch]++;
		}
		p++;
	}
	
	p=(const unsigned char *) s2;
	while(*p){
		unsigned char ch=*p;
		if(isalpha(ch)){
		if(ch != ' ')
			ch=(unsigned char)tolower(ch);
			freq[ch]--;
		}
		p++;
	}
	
	for(int i=0; i<256; i++){
		if(freq[i] != 0) return 0;
	}
	return 1;
}
int main(){
	char a[256], b[256];
	printf("Enter First Word/ Phrase: ");
	if(!fgets(a, sizeof(a), stdin))
	return 0;
	printf("Enter second word/phrase: ");
	if(!fgets(b, sizeof(b), stdin))
	return 0;
	
	a[strcspn(a, "\n")] = '\0';
	b[strcspn(b, "\n")] = '\0';
	
	if(areAnagrams(a,b)) {
		printf("Result: \"%s\" and \"%s\" ARE anagrams.\n", a,b);
	} else{
		printf("Result: \"%s\" and \"%s\" are NOT anagrams.\n", a,b);
	}	
	return 0;
}
