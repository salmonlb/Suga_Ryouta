#include <stdio.h>

#define QUEUE_LENGTH 5

int Queue[QUEUE_LENGTH];
int length = 0;

void enqueue(int value);
int dequeue();
void showqueue();

int main(){
    enqueue(1);
    showqueue();
    enqueue(3);
    showqueue();
    enqueue(5);
    showqueue();
    enqueue(7);
    showqueue();
    enqueue(9);
    showqueue();

    printf("%d\n", dequeue());
    showqueue();
    printf("%d\n", dequeue());
    showqueue();

    enqueue(2);
    showqueue();
    enqueue(4);
    showqueue();

    return 0;
}

void enqueue(int value){
    Queue[length] = value;
    length += 1;
}

int dequeue(){
    int rvalue;
    rvalue = Queue[0];
    length -= 1;
    for (int i = 0; i < length; i++){
        Queue[i] = Queue[i + 1];
    }
    return rvalue;
}

void showqueue(){
    printf("Queue Array is : ");
    for (int i = 0; i < length; i++){
        printf("%d", Queue[i]);
    }
    printf("\n");
}