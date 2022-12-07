#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOOKTARGET 5
#define DATA_LENGTH sizeof data / sizeof data[0]

int data[11];

int result = -1;

int lookTarget(int value);

int main()
{
    time_t time(time_t * time);

    srand((unsigned int) time(NULL));

    for (int i = 0; i < DATA_LENGTH; i++){
            data[i] = i;
    }

    for (int i = 0; i < DATA_LENGTH - 1; i++){
        int movevalue = data[i];
        int target = rand() % DATA_LENGTH;
        
        while(target <= i){
            target = rand()% DATA_LENGTH;
        }

        int targetvalue = data[target];

        data[i] = targetvalue;
        data[target] = movevalue;
    }

    result = lookTarget(0);

    printf("target of index = ");
    printf("%d",result);

    return 0;
}

int lookTarget(int index)
{
    int value = data[index];

    //printf("%d", index);
    //printf(" value is ");
    //printf("%d\n", value);

    if (value == LOOKTARGET){
        return index;
    }
    else{
        return lookTarget(index + 1);
    }
}