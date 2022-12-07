#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define DATA_LENGTH sizeof data / sizeof data[0]

int data[100];

void showArray();

int main()
{
    time_t time(time_t* time);

    srand((unsigned int) time(NULL));

    for (int i = 0; i < DATA_LENGTH; i++){
        data[i]  = rand();
    }

    showArray();

    for (int i = 0; i < DATA_LENGTH; i++){
        for (int j = i + 1; j < DATA_LENGTH; j++){
            if (data[i] > data[j]){
                int thisvalue = data[i];
                data[i] = data[j];
                data[j] = thisvalue;
            }
        }
    }

    showArray();

    return 0;
}

void showArray(){
    for (int i = 0; i < DATA_LENGTH; i++){
        printf("%d", i);
        printf(" index = ");
        printf("%d\n", data[i]);
    }

    printf("--------\n");
}