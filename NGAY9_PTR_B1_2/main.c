#include <stdio.h>
#include <stdlib.h>
//Ham tra ve con tro
//Ver2: cam thay doi tham so, chi can ham chay duoc la ok
int *tim_max(int x, int y){
    static int res;
    if(x > y)
        return res = &x;
    else if (x < y)
        return res = &y;
    else
        return res = &x;

}
int main()
{
    int x = 10;
    int y = 9;
    int *result = tim_max(x, y);
    printf("Max la %d ", *result);
    return 0;
}
