#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    void * data;
    size_t size;
    struct node * next;
    
};
struct node * top = NULL;
void push(void * data,size_t size){
    struct node * new = (struct node*) malloc(sizeof(struct node));
    new->data = malloc(size);
    memcpy(new->data,data,size);
    new->size = size;
    new->next = top;
    top = new;
}
void pop(){
    if(top==NULL){
        printf("No elements in the stack\n");
    }
    else{
        struct node * temp = top;
        top = top->next;
        free(temp->data);
        free(temp);
    }
}
void peek(){
    if(top==NULL){
        printf("No elements in the stack\n");
    }
    else if(top->size==sizeof(int)){
        printf("The top element in the stack is :%d\n",*(int *)top->data);
    }
    else if(top->size==sizeof(float)){
        printf("The top element in the stack is :%f\n",*(float *)top->data);
    }
    else if(top->size==sizeof(double)){
        printf("The top element in the stack is :%lf\n",*(double *)top->data);
    }
    else{
        printf("The top element in the stack is :%c\n",*(char *)top->data);
    }
}
void display(){
    struct node* temp = top;
    if(temp==NULL){
        printf("No elements in the stack\n");
    }
    else{
        while(temp!=NULL){
        if(temp->size==sizeof(int)){
            printf("%d ",*(int *)temp->data);
            }
        else if(temp->size==sizeof(float)){
            printf("%f ",*(float *)temp->data);
            }
        else if(temp->size==sizeof(double)){
            printf("%lf ",*(double *)temp->data);
            }
        else{
            printf("%c ",*(char *)temp->data);
            }
        temp=temp->next;
        }
        printf("NULL\n");
    }
    
    
}
int main()
{
    
    int x,i;
    char t,c;
    double d;
    float f;
    while(1){
        printf("Enter the stack operation to be performed\n");
        printf("Stack menu's :\n1.push 2.pop 3.peek 4.display 5.exit\n");
        scanf("%d",&x);
        switch(x){
            case 1:
    step:
                printf("Data type to be added :\n");
                printf("c->char | i->int | f->float | d->double\n");
                scanf(" %c",&t);
                if(t=='i'){
                    printf("Enter the value to be pushed :");
                    scanf(" %d",&i);
                    push(&i,sizeof(int));
                }
                else if(t=='c'){
                    printf("Enter the value to be pushed :");
                    scanf(" %c",&c);
                    while(getchar() != '\n');
                    push(&c,sizeof(char));
                }
                else if(t=='d'){
                    printf("Enter the value to be pushed :");
                    scanf(" %lf",&d);
                    push(&d,sizeof(double));
                }
                else if(t=='f'){
                    printf("Enter the value to be pushed :");
                    scanf(" %f",&f);
                    push(&f,sizeof(float));
                }
                else{
                    printf("Invalid data type \n");
                    goto step;
                }
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                while(top!=NULL){
                    pop();
                }
                exit(0);
            default:
                printf("Invalid choice");
        }
    }
    return 0;
}
