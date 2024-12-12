#include<stdio.h>
//	Khai bao va gan gia tri cho 1 chuoi bat ki,
//	Viet chuong trinh in ra cac chu cai dau tien viet hoa 
//	
//	B1. Khai bao va gan gia tri 
//	B2. 

int main(){
	char text[100] = "pham phuong anh ";
	int size = strlen(text);
	for(int i=0; i<size; i++){
		if(i==0 || i>0 && text[i-1] == ' '){
			text[i]=toupper(text[i]);
		}
	}
	printf("%s", text);
}
