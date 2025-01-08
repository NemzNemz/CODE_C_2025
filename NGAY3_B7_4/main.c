#include <stdio.h>
#include <stdlib.h>
void tong_sn(int *n){
    //scanf("%d", n);
    int sum1 =0, sum2 =0;
    for(int i =0; i<= *n; i++){
        sum1 += i;
        sum2 += pow(i, 2);
    }
    printf("Tong sn1 la %d \n", sum1);
    printf("Tong sn2 la %d \n", sum2);
}
int main()
{
    int n;
    printf("Nhap n de tinh tong Sn! \n");
    scanf("%d", &n);
    tong_sn(&n);
    return 0;
}
