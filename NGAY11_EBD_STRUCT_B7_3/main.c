#include <stdio.h>
#include <stdlib.h>
//Tim cam bien co dien ap cao nhat
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

void update_cam_bien (info *sensor, int size){
    for(int i =0; i< size; i++){
        printf("Nhap ten cam bien\n");
        fgets(sensor[i].name, sizeof(sensor[i].name), stdin);
        sensor[i].name[strcspn(sensor[i].name, "\n")] = 0;

        printf("Nhap stt \n");
        scanf("%d", &sensor[i].so);
        printf("Nhap dien ap \n");
        scanf("%f", &sensor[i].vol);
        getchar();
    }
}

info *max_vol(info *sensor, int size){
    info *max_vlt = &sensor[0];
    for(int i=0; i<size; i++){
        if(sensor[i].vol > max_vlt->vol){
            max_vlt = &sensor[i];
        }
    }
    return max_vlt;
}

int main()
{
    info sensor[3];
    update_cam_bien(&sensor, 3);
    info *max_volt = max_vol(&sensor, 3);
    printf("Cam bien vol cao nhat la: \n");
    printf("Ten:%s | STT:%d | Vol:%.1f V \n", max_volt->name, max_volt->so, max_volt->vol);
    return 0;
}
