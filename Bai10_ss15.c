#include <stdio.h>
#include <string.h>

int main(){
	char text[100] = "phuong anh pham";
	int size = strlen(text), temp , a = 0 , check = 0;
	int count[50] = {0};
	char character[50];
	
	for ( int i = 0; i< size ; i++){
		check= 0;
		for ( int j = 0; j<a; j++){
			if ( character[j] == text[i] ){
				count[j]++;
				check= 1;
				break;
			}
		}
		if (check == 0 && text[i] != ' ') {
            character[a] = text[i];
            count[a] = 1;
            a++;
        }
	}
	printf("Thong ke cac ki tu trong chuoi"); 
	for ( int i = 0; i< strlen(character) ; i++){
		printf("\nki tu %c : %d", character[i], count[i]);
	}
	
	return 0;
}
