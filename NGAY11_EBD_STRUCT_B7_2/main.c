#include <stdio.h>
#include <stdlib.h>
//BT: Thay doi gia tri mang struct trong ham
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

void update_cam_bien (info *sensor, int size){
    for(int i =0; i< size; i++){
        printf("Nhap ten cam bien\n");
        getchar();
        fgets(sensor[i].name, sizeof(sensor[i].name), stdin);
        sensor[i].name[strcspn(sensor[i].name, "\n")] = 0;

        printf("Nhap stt \n");
        scanf("%d", &sensor[i].so);
        printf("Nhap dien ap \n");
        scanf("%f", &sensor[i].vol);
    }
}

void in_cam_bien(info *sensor, int size){
    for(int i=0; i<size; i++){
        printf("Ten:%s | STT:%d | Vol:%.1f V\n", sensor[i].name, sensor[i].so, sensor[i].vol);
    }
}
int main()
{
    info sensor[3] ={
        {"DHT11", 1, 3.3},
        {"DHT22", 2, 3.3},
        {"DHT33", 3, 3.3}
    };
    for(int i=0; i<3; i++){
        printf("Ten:%s | STT:%d | Vol:%.1f V \n", sensor[i].name, sensor[i].so, sensor[i].vol);
    }
    update_cam_bien(&sensor, 3);
    in_cam_bien(&sensor, 3);
    return 0;
}
