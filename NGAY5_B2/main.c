#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Cac thao tac voi chuoi
int main()
{
    char ten[] = "Le Chan Nam";
    char *ten2 = "LCN";
    ten2 = "A18 PRO";
    printf("%s \n", ten);
    printf("%s \n", ten2);
    //str len de tra ve do dai cua chuoi
    int len = strlen(ten2);
    printf("do dai chuoi %d \n", len);
    //str cmp de tra ve DO LON, khong phai do dai chuoi
    //Lon hon 0 thi str1 to hon str2
    //Be hon 0 thi str1 nho hon str2
    //Bang 0 thi 2 str ngang nhau
    int size = strcmp(ten, ten2);
    printf("do lon la %d \n", size);
}
