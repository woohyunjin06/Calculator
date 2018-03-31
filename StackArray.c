#include <stdio.h>
#include "StackArray.h"

void StackInit(Stack * ps){
    ps->top = 0;
}
int IsEmpty(Stack * ps){
    if(ps->top==0)
        return 1;
    else
        return 0;
}
int IsFull(Stack * ps){
    if(ps->top>LEN-1)
        return 1;
    else
        return 0;
}
void Push(Stack *ps, char data){
    if(!IsFull(ps)){
        ps->stackArr[ps->top++] = data;
        //printf("PUSH SUCCESS\n");
    }
    else{
        //printf("PUSH FAILED\n");
    }

}
char Pop(Stack * ps){
    if(!IsEmpty(ps)){
        return ps->stackArr[--ps->top];
    }
    else
        return -1;
}
char Peek(Stack *ps){
    if(!IsEmpty(ps)) {
        return ps->stackArr[ps->top-1];
    }
    else
        return -1;
}
