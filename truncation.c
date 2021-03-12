#include<cs50.h>
#include<stdio.h>

int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    float z = x/y;
    printf("%f\n %s\n", z, "The product of dividing x by z");

    float x_1 = get_float("x_1: ");
    float y_1 = get_float("y_1: ");
    float z_1 = x_1/y_1;
    printf("%f\n %s\n", z_1, "The product of dividing x by z");

    z = (float)x / (float)y;
    printf("%f\n %s\n", z, "The product of dividing x by z");
}