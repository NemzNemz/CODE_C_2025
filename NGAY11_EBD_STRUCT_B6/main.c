#include <stdio.h>
#include <stdlib.h>
//Sua struct ben trong ham
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

void tt_cam_bien(info *sensor){
    printf("Name:%s | Num:%d| Vol:%.1fV \n", sensor->name, sensor->so, sensor->vol);
}

void update_cam_bien(info *sensor){
    printf("Nhap ten cam bien!\n");
    getchar();
    fgets(sensor->name, sizeof(sensor->name), stdin);
    //Xoa ky tu xuong dong cua fgets
    sensor->name[strcspn(sensor->name, "\n")] = 0;

    printf("Nhap so thu tu! \n");
    scanf("%d", &sensor->so);
    printf("Nhap dien ap hoat dong! \n");
    scanf("%f", &sensor->vol);
}

int main()
{
    info sensor;
    update_cam_bien(&sensor);
    tt_cam_bien(&sensor);
    return 0;
}
