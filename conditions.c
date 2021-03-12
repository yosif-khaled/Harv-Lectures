#include<cs50.h>
#include<stdio.h>

int main(void){
    printf("This is a program that showcase what if statements do");
    int x = get_int("x: ");
    int y = get_int("y: ");

    int z = x + y;

    int a = get_int("z = x + y, what is the sum of the products you chose?");

    if(a == z){
        printf("your answer is correct");
    }else if(a != z){
        printf("wrong answer");
    }
}