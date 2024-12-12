#include <stdio.h>
#include <string.h>

void deleteItem(char *string, char character) {
    int i, j;
    for (i = j = 0; string[i] != '\0'; i++) {
        if (string[i] != character) {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';
}

int main() {
    char string[100] = "Hello, World!";
    char character;

    printf("Chuoi da khai bao la: %s\n", string);

    printf("Nhap vao ki tu can xoa: ");
    scanf(" %c", &character);

    deleteItem(string, character);

    printf("Chuoi sau khi xoa la: %s\n", string);

    return 0;
}
