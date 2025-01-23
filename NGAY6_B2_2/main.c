#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Cac thao tac voi chuoi: strcpy
//Strcpy dung de copy gia tri cua chuoi nguon vao chuoi dich
//Cu phap la: char* strcpy (char* destination, const char* source)
int main()
{
    char src[] = "Hello oc tieu!";
    char dest[] = "I miss your voice soo much ~~!";
    char dest2[] = "I hate u!";
    //Ngoai viec gan co dinh, strcpy co the gan theo dia chi va index cua chuoi nua
    //Muc tieu sau khi strcpy la "Hello I hate u"
    strcpy(&src[6], dest2);
    printf("%s \n", src);
    return 0;
}
