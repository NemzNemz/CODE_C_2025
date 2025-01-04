#include <stdio.h>
#include <stdlib.h>
int a, b, temp;
int UCLN(int a, int b){
    if(a == 0 || b == 0) return a + b;
    while(a != b){
        if(a > b) a = a-b;
        else b = b -a;
    }
    return a;
}
int BCNN(int a, int b){
 return a * b / UCLN(a, b);
}
int main()
{
    printf("Nhap a \n");
    scanf("%d", &a);
    printf("Nhap b \n");
    scanf("%d", &b);
    temp = UCLN(a, b);
    printf("UCLN la %d\n", temp);
    printf("BCNN la %d\n", BCNN(a, b));
    return 0;
}
