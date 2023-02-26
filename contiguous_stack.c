#include <stdio.h>
#include <stdlib.h>

#define MAXSTACK 5

typedef char stackEntryType;
typedef enum{false,true} boolean;

typedef struct{
    int top;
    stackEntryType entry[MAXSTACK];
} stack;

void CreateStack(stack *s){
    s->top=-1;
}

boolean IsStackEmpty(stack *s){
    return (s->top==-1);
}

boolean IsStackFull(stack *s){
    return (s->top==MAXSTACK-1);
}
stackEntryType Top(stack *s){
    return (s->entry[s->top]);
}

void Push(stackEntryType item, stack *s){
    if(IsStackFull(s)){
        printf("Stack is Full");
        exit(1);
    }else {
        s->entry[++s->top]=item;
    }
}

void Pop(stack *s, stackEntryType *item){
   if(IsStackEmpty(s)){
        printf("stack is Empty");
        exit(1);
    }
   else
        *item=s->entry[s->top--];
}


int main(){

stack s;
char c,i;

CreateStack(&s);

// Push('P',&s);
// Push('a',&s);
// Push('v',&s);
// Push('i',&s);
// Push('r',&s);

Pop(&s,&i);
printf("%c\n",i);
printf("%c\n",Top(&s));

Push('t',&s);
printf("%c\n",Top(&s));


return 0;

// /********pointer concept*********/
// int i=10;
// int* ad=&i;
// int** add=&ad;


// printf("%p\n",ad);
// printf("%p\n",add);
// printf("%d\n",*ad);
// printf("%d\n",**add);
// /****************     ********************/
}