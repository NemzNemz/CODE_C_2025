#include <stdio.h>
#include <stdlib.h>
//Test truyền tham chiếu và truyền tham trị
int tang(int n){
    return n+=1;
}

int tang2(int *n){
    return *n+=1;
}

int main()
{
    int n = 100;
    int n2 = 100;
    tang(n);
    printf("n qua tham tri la %d \n", n);
    tang2(&n2);
    printf("n qua tham chieu la %d \n", n2);
    return 0;
}
