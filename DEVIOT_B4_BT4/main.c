#include <stdio.h>
#include <stdlib.h>
int a, b, c;
int main()
{
    printf("Nhap bien a \n");
    scanf("%d", &a);
    printf("Nhap bien b \n");
    scanf("%d", &b);
    printf("Nhap bien c \n");
    scanf("%d", &c);

    if(a >  b && a > c) printf("Max la a!!");
    else if(b > a && b > c) printf("Max la b");
    else printf("Max la c");
}
