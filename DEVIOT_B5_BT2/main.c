#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool perfect(int n){
    int sum = 0;
    for(int i =1; i <= n/2; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum == n) return true;
    else return false;
}
int main()
{
    int n;
    printf("Nhap n de kiem tra so hoan hao\n");
    scanf("%d", &n);
    if(perfect(n)) printf("YES!");
    else printf("NO !");
    return 0;
}
