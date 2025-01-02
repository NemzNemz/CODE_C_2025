#include <stdio.h>
#include <stdlib.h>
int UCLN(int a, int b){
    if(a ==0 || b ==0){
        return a + b;
    }
    while(a!=b){
        if(a > b) a = a-b;
        else b = b -a;
    }
    return a;
}

int BCNN(int a, int b){
    return abs(a * b)/ UCLN(a,b);
}

int main()
{
    int a, b;
    printf("Nhap bien a \n");
    scanf("%d", &a);
    printf("Nhap bien b \n");
    scanf("%d", &b);
    printf("UCLN la %d \n", UCLN(a, b));
    printf("BCNN la %d \n", BCNN(a, b));
    return 0;
}
