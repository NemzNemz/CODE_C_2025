#include <stdio.h>
#include <stdlib.h>
//Tiep tuc ve strtok
int main()
{
    char s1[70] = "Hello moi nguoi, minh la Nemz-Nemz";
    //O day minh muon tach chuoi nay thanh cac chuoi con
    char* token = strtok(s1, " ,-");
    while(token != NULL){
        printf("%s \n", token);
        token = strtok(NULL, " ,-");
    }
    return 0;
}
