#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum =0;
    printf("Nhap n vao !\n");
    scanf("%d", &n);
    printf("So ban da nhap la %d \n", n);
    for(int i =0; i<=n; i++){
        if(i %2 != 0){
            sum += i*i;
        }
    }
    printf("Tong binh phuong la %d", sum);
    return 0;
}
