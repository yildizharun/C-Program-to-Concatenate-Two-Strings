#include <stdio.h>
#include <stdlib.h>


int sizeOfArray(char str[]);
void main() {
	char str1[100];
	char str2[100];
	
	printf("ilk stringi giriniz: ");
	gets(str1);
	printf("ikinci stringi giriniz: ");
	gets(str2);
	
	int size=sizeOfArray(str1)+sizeOfArray(str2)+1;
	char str3[size];
	
	int i;
	for(i=0;i<100;i++){
		if(str1[i]!='\0'){
			str3[i]=str1[i];
		}
		else{
			break;
		}
	}
	
	int j=0;
	for(i=sizeOfArray(str1),j=0;i<size;i++,j++){
		str3[i]=str2[j];
	}
	
	printf("%s",str3);
}
int sizeOfArray(char str[]){
	int i;
	int size=0;
	for(i=0;i<100;i++){
		if(str[i]!='\0'){
			size++;
		}
		else{
			break;
		}
	}
	return size;
}
