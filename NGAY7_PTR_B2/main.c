#include <stdio.h>
#include <stdlib.h>
//Kieu du lieu cua con tro quan trong the nao?
int main()
{   char array[10] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A};
    char *ptr = array;
    printf("Before loop pt = %x \n", ptr);
    for(int i =0; i <10; i++){
        printf("%x \n", *ptr);
        ptr++;
    }
    printf("After loop pt = %x \n", ptr);
    return 0;
}
