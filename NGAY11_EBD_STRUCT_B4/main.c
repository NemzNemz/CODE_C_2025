#include <stdio.h>
#include <stdlib.h>
//Nhap lieu vao struct nhung nhieu cam bien hon
typedef struct sensor_info{
    char name[20];
    int so;
    float vol;
}info;

int main()
{
    info cam_bien[3];
    for(int i =0; i <3; i++){
        printf("Nhap ten cam bien thu %d!\n", i+1);
        //xoa bo dau \n con lai
        getchar();
        fgets(cam_bien[i].name, sizeof(cam_bien[i].name), stdin);
        //Xoa ky tu xuong dong cua fgets
        cam_bien[i].name[strcspn(cam_bien[i].name, "\n")] = 0;

        printf("Nhap so thu tu! \n");
        scanf("%d", &cam_bien[i].so);
        printf("Nhap dien ap hoat dong! \n");
        scanf("%f", &cam_bien[i].vol);
    }
    printf("Thong tin cam bien la: \n");
    for(int i =0; i <3; i++){
        printf("Cam bien thu %d:", i+1);
        printf("%s  %d  %.1fV \n", cam_bien[i].name, cam_bien[i].so, cam_bien[i].vol);
    }
}
