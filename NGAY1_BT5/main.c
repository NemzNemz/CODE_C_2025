#include <stdio.h>
#include <stdlib.h>
int xA, yA, xB, yB, xC, yC, xM, yM;
void nhap(){
    printf("Nhap toa do A !\n");
    scanf("%d", &xA);
    scanf("%d", &yA);

    printf("Nhap toa do B !\n");
    scanf("%d", &xB);
    scanf("%d", &yB);

    printf("Nhap toa do C !\n");
    scanf("%d", &xC);
    scanf("%d", &yC);

    printf("Nhap toa do M !\n");
    scanf("%d", &xM);
    scanf("%d", &yM);
}

float S_ABC(){
    return fabs(1*((xA*(yB - yC)) + (xB*(yC - yA)) + (xC*(yA -yB)))/2.0);
}

float S_MAB(){
    return fabs(1*((xM*(yA - yB)) + (xA*(yB - yM)) + (xB*(yM -yA)))/2.0);
}

float S_MBC(){
    return fabs(1*((xM*(yB - yC)) + (xB*(yC - yM)) + (xC*(yM -yB)))/2.0);
}

float S_MCA(){
    return fabs(1*((xM*(yC - yA)) + (xC*(yA - yM)) + (xA*(yM -yC)))/2.0);
}

int main()
{
    nhap();
    printf("S cua tam giac ABC la %.2f \n", S_ABC());
    printf("S cua tam giac MAB la %.2f \n", S_MAB());
    printf("S cua tam giac MBC la %.2f \n", S_MBC());
    printf("S cua tam giac MCA la %.2f \n", S_MCA());
    float temp_ABC = S_ABC();
    float temp_ALL = S_MAB() + S_MCA() + S_MBC();
    if(temp_ABC > 0) {
        printf("Bay gio kiem tra vi tri diem M o dau! \n");
        if(temp_ALL == temp_ABC){
            printf("Diem M nam trong hoac tren ABC! \n");
            if(S_MAB() > 0 && S_MBC() > 0 && S_MCA() > 0){
                printf("M nam trong ABC! \n");
            }
            else if(S_MAB() == 0 || S_MBC() == 0 || S_MCA() == 0){
                printf("M nam tren ABC \n");
            }
        }
        else{
            printf("M nam ngoai tam giac ABC! \n");
        }
    }
    else printf("3 Diem thang hang 0 tao nen tam giac");

    return 0;
}
