#include <stdio.h>
#include <stdlib.h>

int UCLN(int *a, int *b){
    if(*a == 0 || *b == 0) return a + b;
    while(*a != b){
        if(*a > *b) *a = *a-*b;
        else *b = *b -*a;
    }
    return *a;
}
int BCNN(int *a, int *b){
    //khúc này trong đây đã là địa chỉ rồi vì tham số của hàm này cũng là địa chỉ
 return *a * *b / UCLN(a, b);
}
int main()
{
    int a, b;
    printf("Nhap a \n");
    scanf("%d", &a);
    printf("Nhap b \n");
    scanf("%d", &b);
    int temp = UCLN(&a, &b);
    printf("UCLN la %d\n", temp);
    printf("BCNN la %d\n", BCNN(&a, &b));
    return 0;
}
