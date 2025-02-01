#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Khoi tao struct va truy xuat struct
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

int main()
{
    info sensor1 = {"DHT11", 5, 3.7};
    info sensor2;

    strcpy(sensor2.name, "MCP3008");
    sensor2.so = 10;
    sensor2.vol = 3.3;

    printf("Thong tin cam bien la: \n");
    printf("%s - %d - %.1fV \n", sensor1.name, sensor1.so, sensor1.vol);
    printf("%s - %d - %.1fV \n", sensor2.name, sensor2.so, sensor2.vol);
    return 0;
}
