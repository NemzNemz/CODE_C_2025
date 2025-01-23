#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Cac thao tac voi chuoi: strcat
//Strcat su dung de ghep chuoi nay vao sau chuoi dich
//Cu phap la: char* strc (char* destination, const char* source)
int main()
{
    char s1[40] = "Hello oc tieu! ";
    char s2[] = "I hate u!";
    char s3[20] = {'i','P','h','o','n','e'};
    char s4[10] = {'1','6','P','r','o'};
    //Lan nay se ghep s2 vao duoi s1
    //Ket qua mong doi se la Hello .... I hate u!
    strcat(s1, s2);
    strcat(s3, s4);
    printf("%s \n", s1);
    printf("%s \n", s3);
    return 0;
}
