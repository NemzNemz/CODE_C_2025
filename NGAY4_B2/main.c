#include <stdio.h>
#include <stdlib.h>
//Bien static trong "bien cuc bo"
void tangso(){
    static int x = 0;
    x++;
    printf("%d \n", x);
}

void time_app(){
    static int count =0;
    count++;
    printf("slxh:%d \n", count);
}

int main()
{
    for(int i =0; i <5; i++){
      tangso();
      time_app();

    }
    return 0;
}
