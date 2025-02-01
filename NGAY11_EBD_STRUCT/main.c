#include <stdio.h>
#include <stdlib.h>
//Tap su dung struct de nhom cac gia tri lai voi nhau
typedef struct sensor_info{
    char name[20];
    int number;
    float voltage;
}info;

int main()
{
    info sensor;

    printf("Nhap ten sensor! \n");
    fgets(sensor.name, sizeof(sensor.name), stdin);
    printf("Nhap so thu tu \n");
    scanf("%d", &sensor.number);
    printf("Nhap dien ap \n");
    scanf("%f", &sensor.voltage);

    printf("Thong tin sensor la: ");
    printf("TEN:%s -STT:%d -VOLTAGE:%.1fV", sensor.name, sensor.number, sensor.voltage);
    return 0;
}
