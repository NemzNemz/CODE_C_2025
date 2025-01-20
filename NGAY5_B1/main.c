#include <stdio.h>
#include <stdlib.h>
//Su khac nhau giua chuoi con tro va chuoi mang
int main()
{
    char ten[] = "Le Chan Nam";
    char *ten2 = "LCN";
    ten[0] = 'A';
    ten[1] = 'B';
    ten[2] = '_';
    ten[3] = 'K';
    ten[4] = 0;
    ten2 = "A18 PRO";
    printf("%s \n", ten);
    printf("%s \n", ten2);
    return 0;
}
