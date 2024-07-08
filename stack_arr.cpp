#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h";

int pop(stack *s){
    if(s -> dizi == NULL)
    {
        printf("dizi bos");
        return -1;
    }
    if(s->tepe<=s->boyut/4)
    {
        int *dizi2 = (int*)malloc(sizeof(int)*s->boyut/2);
        for(int i = 0;i<s->boyut;i++)
            dizi2[i] = dizi[i];
        free(s -> dizi);
        s ->dizi = dizi2;
        s->boyut /= 2;
    }
    return dizi[--tepe];
}
void push(int a, stack *s){
    if(s->dizi == NULL){
        s_>dizi = (int*)malloc(sizeof(int)*2);
    }
    if(s->tepe>=s->boyut){
        int *dizi2 = (int*)malloc(sizeof(int)*s->boyut*2);
        for(int i = 0;i<s->boyut;i++)
        {
            s->dizi2[i] = s->dizi[i];
        }
        free(s->dizi);
        s->dizi = dizi2;
        s->boyut *= 2;
    }   
    s->dizi[tepe++] = a;
    

}
void bastir(){
    printf("boyut: %d ", boyut);
    for(int i = 0;i<tepe;i++){
        printf("%d ", dizi[i]);
    }
    
}
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
    
}
