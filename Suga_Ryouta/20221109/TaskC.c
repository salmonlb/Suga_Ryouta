#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define DATA_LENGTH 100

int data[DATA_LENGTH];

int target = 50;

int left = 0;
int right = DATA_LENGTH - 1;
int result = -1;

void showArray();

void sortArray();

int main(){

    time_t time(time_t * time);
    srand((unsigned int) time(NULL));

    for (int i = 0; i < DATA_LENGTH; i++){
        data[i] = rand() % DATA_LENGTH + 1;
    }

    showArray();

    sortArray();

    while (left < right){
        int mid = (left + right) / 2;

        if (data[mid] == target){
            result = mid;
            break;
        }

        if (data[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }

    showArray();

    if (result >= 0){
        printf("target index is ");
        printf("%d\n", result);
    }
    else{
        printf("cannot found target\n");
    }

    return 0;
}

void showArray(){
    for (int i = 0; i < DATA_LENGTH; i++){
        printf("index ");
        printf("%d", i);
        printf(" value = ");
        printf("%d\n", data[i]);
    }
    printf("-----\n");
}

void sortArray(){
    for (int i = 0; i < DATA_LENGTH; i++){
        for (int j = i + 1; j < DATA_LENGTH; j++){
            if (data[i] > data[j]){
                int thisvalue = data[i];
                data[i] = data[j];
                data[j] = thisvalue;
            }
        }
    }
}