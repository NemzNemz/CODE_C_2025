#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//BT1: Tim ki tu t trong deviot va tra ve vi tri cua no
int main()
{
    char s1[20] = "Deviot";
    char s2[2] = "i";
    char *asw = strstr(s1, s2);
    if(asw != NULL){
        printf("Da tim thay %s \n", s2);
        printf("Tim thay %s o vi tri %d", s2, asw-s1);
    }
    else printf("Cha co me gi !");
    return 0;
}
