#include <stdio.h>
#include <stdlib.h>
//Khai niem Extern
int btcuc = 5;
int phep_cong(int a, int b){
    int result;
    return result = a + b;
}
int main()
{
    int a, b;
    printf("Nhap a, b!\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d \n", phep_cong(a, b));
    printf("%d \n", btcuc);
    printf("%d \n", phep_tru());
    return 0;
}
