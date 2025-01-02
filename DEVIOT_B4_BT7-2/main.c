#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n, sum;
int main()
{
    printf("Nhap bien n \n");
    scanf("%d", &n);
    printf("Tong S(n) la: ");
    for(int i = 1; i <= 2*n+1; i+=2){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
