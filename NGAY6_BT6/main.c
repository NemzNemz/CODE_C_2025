#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//BT6: Nhap vao 1 chuoi, doi ki tu thuong thanh hoa va nguoc lai
int main()
{
    printf("Nhap vao 1 chuoi bat ki!\n");
    char user[90];
    gets(user);
    //Duyet full mang den ki tu ket thuc chuoi
    for(int i = 0; user[i] != '\0'; i++){
        //Neu ki tu do la in hoa
        if(isupper(user[i]))
            //Chuyen hoa thanh thuong
            user[i] = tolower(user[i]);
        else if(islower(user[i]))
            user[i] = toupper(user[i]);
    }
    printf("Chuoi moi: %s", user);
    return 0;
}
