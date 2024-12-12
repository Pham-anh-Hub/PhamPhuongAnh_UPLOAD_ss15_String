#include<stdio.h>
#include<string.h> 
//	Khai bao va gan gia tri cho 1 chuoi bat ki,
//	+ dem so luong ki tu la chu cai
//	+ dem so luong ki tu la chu so 
//	+ dem so luong ki tu la ki tu dac biet 
//	INPUT: hvjhd32*&4xn5vb 
//	OUTPUT:
//		+ 13 ki tu la chu cai 
//		+  4 ki tu la chu so 
//		+ 2 ki tu dac biet 

int main(){
	char string[100] = "bbc43&^&^&%hh87";
	int size = strlen(string);
	int countChar=0, countNum=0 ;
	for(int i=0; i<size; i++){
		if(('a'<=string[i] && string[i]<='z') || ('A'<=string[i] && string[i]<='Z')){
			countChar++;
		}	
	}
	for(int i=0; i<size; i++){
		if('0'<=string[i] && string[i]<='9'){
			countNum++;
		}
	}
	printf("chuoi da nhap la: %s", string);
	printf("\nSo ki tu la chu cai la: %d", countChar);
	printf("\nSo ki tu la chu so la: %d", countNum);
	printf("\nSo ki tu la ki tu dac biet la: %d",size - countChar - countNum);
	
	return 0;
} 
