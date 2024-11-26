#include <stdio.h>
int main(){
int n;
    printf("Ban hay nhap vao mot so nguyen: ");
    scanf("%d", &n);
    if (n <= 0) {
    printf("Ban hay nhap vao so nguyen duong.\n");
    return 1;
    }
    printf("Cac uoc cua so %d la: \n", n);
    for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
    printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
