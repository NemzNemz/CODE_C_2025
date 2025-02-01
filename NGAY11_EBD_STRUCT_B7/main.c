#include <stdio.h>
#include <stdlib.h>
//Truyen mang struct vao ham
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

void in_tt_cam_bien(info *sensor, int size){
    for(int i =0; i < size; i++){
        printf("Name:%s | Num:%d| Vol:%.1fV \n", sensor[i].name, sensor[i].so, sensor[i].vol);
    }
}

int main()
{
    info sensor[3] ={
        {"DHT11", 1, 3.3},
        {"DHT22", 2, 3.3},
        {"DHT33", 3, 3.3}
    };

    in_tt_cam_bien(&sensor, 3);
}
