#include <stdio.h>
#include <stdlib.h>
//Tong uoc so, dem uoc so, in uoc so trong vong 1-n
int n;
void all_in_one(int n){
    int count =0, sum;
    for(int i =1; i <= n; i++){
        if(n % i == 0){
        printf("%d ", i);
        count++;
        sum += i;
        }
    }
    printf("Co %d uoc so \n", count);
    printf("Tong cac uoc so la %d \n", sum);
}

int main()
{
    printf("Nhap n !\n");
    scanf("%d", &n);
    all_in_one(n);
    return 0;
}
