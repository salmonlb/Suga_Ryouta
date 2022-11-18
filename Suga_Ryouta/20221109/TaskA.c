#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t time(time_t * time);

    srand((unsigned int) time(NULL));

    int data[11];
    int datasize = sizeof data / sizeof data[0];

    int result = -1;
    int target = 5;

    for (int i = 0; i < datasize; i++){
            data[i] = i;
    }

    for (int i = 0; i < datasize - 1; i++){
        int movevalue = data[i];
        int target = rand() % datasize;
        
        while(target <= i){
            target = rand()% datasize;
        }

        int targetvalue = data[target];

        data[i] = targetvalue;
        data[target] = movevalue;
    }

    for (int i = 0; i < datasize; i++){
        if (data[i] == target){
            result = i;
            break;
        }
    }

    printf("target of index = ");
    printf("%d",result);

    return 0;
}