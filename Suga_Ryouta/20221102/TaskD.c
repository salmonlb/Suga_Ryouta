#include<stdio.h>

int main()
{
    printf("Sain\n");
    
    for (int i = 1; i <= 100; i++){
        if (i % 15 == 0){
            printf("fizz buzz\n");
        }
        else if (i % 3 == 0){
            printf("fizz\n");
        }
        else if (i % 5 == 0){
            printf("buzz\n");
        }
    }
}