#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "666888";
    char input[20];
   
    printf("Ban hay nhap mat khau: ");
    scanf("%s", input);

    if (strcmp(password, input) == 0) {
        printf("Da dang nhap thanh cong!\n");
    } else {
        printf("Ban nhap sai roi.Hay thu lai.\n");
    }
    return 0;
}

