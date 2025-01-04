#include <stdio.h>
#include <stdlib.h>
int sumDigit(int n){
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    int n = 123;
    printf("Tong n la %d\n", sumDigit(n));
    return 0;
}
