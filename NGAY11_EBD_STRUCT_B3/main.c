#include <stdio.h>
#include <stdlib.h>
//Nhap lieu vao struct
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

int main()
{
    info cam_bien;

    printf("Nhap ten cam bien!\n");
    fgets(cam_bien.name, sizeof(cam_bien.name), stdin);
    //Xoa ky tu xuong dong cua fgets
    cam_bien.name[strcspn(cam_bien.name, "\n")] = 0;

    printf("Nhap so thu tu! \n");
    scanf("%d", &cam_bien.so);
    printf("Nhap dien ap hoat dong! \n");
    scanf("%f", &cam_bien.vol);

    printf("Thong tin cam bien la: \n");
    printf("%s  %d  %.1fV \n", cam_bien.name, cam_bien.so, cam_bien.vol);
    return 0;
}
