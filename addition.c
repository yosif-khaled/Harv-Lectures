#include<cs50.h>
#include<stdio.h>

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n %s\n", x + y, "is this your number?");
}