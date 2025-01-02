#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
bool KT_SNT(int n){
    int count = 0;
    if(n == 0 || n == 1) return false;

    for(int i = 2; i <=sqrt(n); i++){
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    printf("Nhap so n !\n");
    scanf("%d", &n);
    for(int i =0; i<=n; i++){
        if(KT_SNT(i)) printf("%d \n", i);
    }
    return 0;
}
