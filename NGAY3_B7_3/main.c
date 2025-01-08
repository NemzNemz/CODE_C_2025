#include <stdio.h>
#include <stdlib.h>
//Viết 1 số nguyên và in ra các số lẻ và số chẵn có trong số nguyên đó
void nhap(int *n){
    printf("Nhap gia tri n vao! \n");
    //Khúc này vì tham số đã là địa chỉ n, chỉ cần ghi n là được
    scanf("%d", n);
    int sc =0;
    //giá trị con trỏ, nếu để n thì sẽ là địa chỉ con trỏ
    while(*n !=0){
        sc = *n%10;
        if(sc %2 == 0){
            printf("So chan trong n la %d \n", sc);
        }
        else if(sc %2 != 0){
            printf("So le trong n la %d \n", sc);
        }
        *n /=10;
    }
}

int main()
{
    int n;
    nhap(&n);
    return 0;
}
