#include <stdio.h>
#include <stdlib.h>
//Ham tra ve con tro
//Ver1: tu do thay doi tham so
int *tim_max(int *x, int *y){
    if(*x > *y){
        return x;
    }
    else if(*x < y){
        return y;
    }
    else return x;

}
int main()
{
    int a = 10;
    int b = 9;
    int *result = tim_max(&a, &b);
    printf("Max la %d ", *result);
    return 0;
}
