#include <stdio.h>

#define MAX_STACK 5 //配列のサイズ

int stack[MAX_STACK];
int tail = 0;   //最後尾

void showStack();
void push(int value);
int pop();

int main()
{
    push(1);
    showStack();
    push(3);
    showStack();
    push(5);
    showStack();
    push(7);
    showStack();
    push(9);
    showStack();
 
    printf("%d\n", pop());
    showStack();
    printf("%d\n", pop());
    showStack();

    return 0;
}

void showStack(){
    printf("Stack Array is = ");
    for (int i = 0; i < tail; i++){
        printf("%d", stack[i]);
    }
    printf("\n");
}

void push(int value){
    if (tail < MAX_STACK){
        stack[tail] = value; 
        tail += 1;
    }
}

int pop(){
    int rvalue;
    if (tail >= 0){
        tail -= 1;    
        rvalue = stack[tail];
    }
    else{
        rvalue = -1;
    }
    return rvalue;  
}
