#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bien static trong "bien cuc bo"
void printt(){
    static int cnt =0;
    cnt = 1 - cnt;
    if(cnt == 0){
        printf("So 1! \n");
    }
    else printf("So 0! \n");
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
    for(int i =0; i < 5; i++){
        printt();
        delay(1);
    }
    return 0;
}
