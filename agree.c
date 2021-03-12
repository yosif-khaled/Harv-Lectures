#include<cs50.h>
#include<stdio.h>

int main(void){
    char c = get_char("Do you agree?\t");
    if (c == 'y' || c == 'Y'){
        printf("you agreed");
    }
    else if(c == 'n' || c == 'N'){
        printf("you didn't agree");
    }
    else{
        printf("input must be y or n");
    }
}