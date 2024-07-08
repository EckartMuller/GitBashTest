#include "stack_arr.h";
#include <stdio.h>
#include <stdlib.h>
int *dizi = NULL;
int boyut = 2;
int tepe = 0;

int main(int argc, char const *argv[])
{
    dizi = (int*)malloc(sizeof(int)*2);
    push(10); 
    push(20);
    push(30);
    push(40);
    push(50);
    bastir();
    printf("popped %d", pop());
    printf("popped %d", pop());
    printf("popped %d", pop());
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    bastir();

    return 0;
    
    return 0;
}
