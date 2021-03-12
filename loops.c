#include<cs50.h>
#include<stdio.h>

void helloWorld(void); //prototype
void meow(int n);
int getPositioveInteger(void);

int main(){

    getPositioveInteger();

    int i = 0;

    while(i <= 10){
        printf("%i\n", i);
        i++;
    }

    for(int counter = 0; counter <= 50; counter++){
        helloWorld();
    }
}

void helloWorld(void){
    // this function prints hello world when called
    printf("Hello World\n");
    meow(5);
}

void meow(int n){
    for (int i = 0; i <= n; i++){
        printf("meow\n");
    }
}

int getPositioveInteger(void){
    int n;
    do{

        n = get_int("inter a positive number: ");

    }while(n < 1);

    return n;
}