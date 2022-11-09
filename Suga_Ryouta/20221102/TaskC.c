#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    //make random number
    time_t time(time_t * time);         //get now time
    srand((unsigned int) time(NULL));

    //make dataArray
    int data[10] = {0,0,0,0,0,0,0,0,0,0};
    int dataLength = sizeof data / sizeof data[0];

    for(int i = 0; i < dataLength; i++){
        int randvalue = (rand()%100 + 1);
        data[i] = randvalue;
    } 

    char message[] = " of value=";

    for(int j = 0; j < dataLength; j++){
        printf("%d", j);
        printf("%s",  message);
       printf("%d\n", data[j]); 
    }

    return 0;
}