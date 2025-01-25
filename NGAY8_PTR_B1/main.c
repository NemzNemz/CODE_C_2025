#include <stdio.h>
#include <stdlib.h>
//Toan tu tren con tro
int main()
{
    char array[30] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A};
    //Con tro int kieu 4 byte
    int *array_ptr = array;
    printf("Dia chi cua ptr la %d \n", array_ptr);
    array_ptr++;
    printf("Dia chi cua ptr la %d \n", array_ptr);
    return 0;
}
