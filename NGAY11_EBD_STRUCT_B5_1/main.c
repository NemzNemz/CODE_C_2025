#include <stdio.h>
#include <stdlib.h>
//Truyen struct vao ham bang con tro
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

void tt_cam_bien(info *sensor){
    printf("Name:%s | Num:%d| Vol:%.1fV \n", sensor->name, sensor->so, sensor->vol);
}

int main()
{
    info sensor = {"MCP3008", 1, 3.3};
    tt_cam_bien(&sensor);
    return 0;
}
