#include <stdio.h>

int main()
{
    int data[11];
    int datasize = sizeof data / sizeof data[0];

    printf("Hi");

    for (int i = 0; i < datasize; i++){
            data[i] = i;
    }

    for (int i = 0; i < datasize - 1; i++){
        int movevalue = data[i];
        int target = ((rand())%datasize);
        
        while(target <= i){
            target = ((rand())%datasize);
        }

        int targetvalue = data[target];

        data[i] = targetvalue;
        data[target] = movevalue;
    }

    for (int i = 0; i < datasize; i++){
        printf("%d\n", data[i]);
    }

    return 0;
}