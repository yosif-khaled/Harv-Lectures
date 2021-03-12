#include<stdio.h>
#include<cs50.h>

int printBricks(void);

int main(void){
    printBricks();
}

int printBricks(void){
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while(n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
    return n;
}