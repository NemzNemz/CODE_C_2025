#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float x, n, sum;
int main()
{
    printf("Nhap bien x \n");
    scanf("%f", &x);
    printf("Nhap bien n \n");
    scanf("%f", &n);
    printf("Tong S(n) la: ");
    for(int i = 1; i <= n; i++){
        sum += (float)i * pow(x, i);
    }
    printf("%.2f", sum);
    return 0;
}
