#include <stdio.h>
int main(){
    int n;
    printf("Ban hay nhap sp phan tu can in trong day Fibonacci: ");
    scanf("%d", &n);
    if (n <= 0){
        printf("So phan tu do phai lon hon 0.\n");
        return 1;
    } 
    long long a = 0, b = 1, c;
    printf("Day Fibonacci dau tien %d co phan tu la:\n", n);
    if (n >= 1) {
        printf("%lld ", a);
    }
    if (n >= 2) {
        printf("%lld ", b);  // F(1)
    }
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%lld ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
