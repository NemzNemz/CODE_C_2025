#include <stdio.h>
#include <stdlib.h>
int a, b;
int main()
{
    printf("Nhap 2 gia tri a, b \n");
    printf("Nhap bien a \n");
    scanf("%d", &a);
    printf("Nhap bien b \n");
    scanf("%d", &b);

    if(a == 0){
        if(b ==0) printf("Phuong trinh vo so nghiem!!");
        else if(b != 0) printf("Phuong trinh vo nghiem!!");
    }
    else if(a != 0) printf("Nghiem la %.2f",(float)-b/a);
    return 0;
}
