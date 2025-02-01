#include <stdio.h>
#include <stdlib.h>
//Khoi tao struct va truy xuat struct
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

int main()
{
    info sensor;
    sensor = {"MCP3008", 12, 3.3};
    printf("Thong tin cam bien la: \n");
    printf("%s - %d - %.1f", sensor.name, sensor.so, sensor.vol);
    return 0;
}
