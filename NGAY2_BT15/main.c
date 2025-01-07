#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int day, month, year;

void nhap(){
    printf("Nhap ngay (1-31)! \n");
    scanf("%d", &day);
    printf("Nhap thang (1-12)! \n");
    scanf("%d", &month);
    printf("Nhap nam! \n");
    scanf("%d", &year);
}

bool check_nam_nhuan(){
    if(year % 400 == 0 || (year %4 ==0 && year %100 != 0)) return true;
    else return false;
}

int summ(){
    return (int)(30.42*(month-1)) + day;
}

int main()
{
    nhap();
    int sum = summ();
    if(month == 2 || (check_nam_nhuan()== true && month > 2)){
        sum +=1;
    }
    else if(month > 2 && month < 8){
        sum -=1;
    }
    printf("Ngay do la ngay thu %d trong nam \n", sum);
    return 0;
}
