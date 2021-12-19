#include<stdio.h>
#include<stdlib.h>

struct stack{

    int size;
    int top;
    int* arr;
};

int  isfull(struct stack *sp){
    if(sp->top==sp->size-1){
        // printf("stack is full\n");
        return 0;
    }
    // printf("stack is not full\n");
    return 1;  
}

int isempty(struct stack *sp){
    if(sp->top<0){
        return 0;
    }

    return 1;
}

int push(struct stack *sp,int item){
int i=0;
    while(i!=index){
        
    }
}

int main(){
struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
sp->size=6;
sp->top=-1;
sp->arr=(int *)malloc(sp->size * (sizeof(int)));

int j=isfull(sp);
printf("stack is :- %d\n",j);
int d=isempty(sp);
printf("stack is :- %d\n",d);

sp->arr[0]=5;
sp->top++;

int s=isempty(sp);
printf("stack is :- %d\n",s);
    
    return 0;
}