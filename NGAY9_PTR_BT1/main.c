#include <stdio.h>
#include <stdlib.h>
//BT1: Viet ham su dung con tro de tra ve tong 2 so nhap tu ban phim
int *tong2(int a, int b){
    static int res;
    res = a + b;
    //nho tra ve dia chi
    return &res;
}

int main()
{
    int *ress;
    int a, b;
    printf("Nhap a, b \n");
    scanf("%d%d", &a, &b);
    ress = tong2(a, b);
    printf("Tong 2 so la %d", *ress);
    return 0;
}
