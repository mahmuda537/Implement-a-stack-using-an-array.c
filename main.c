#include <stdio.h>
#include <stdlib.h>
int main (){
int stack[5];
int top=-1;
int in;
while(1){
    printf("1. Push.\n");
    printf("2. Pop.\n");
    printf("3. Display the elements.\n");
    printf("4. Exit.\n");
    printf("Enter your command : ");
    scanf("%d",&in);
    while(in>4 || in<1){
        printf("Invalid Command!!!!!!!!!\n");
        printf("Re-enter your command : ");
        scanf("%d",&in);
    }
    if(in==1){
        top++;
        if(top>4){
            printf("Stack Overflow!!!\n");
            top--;
        }

    else{
        printf("Enter the number you want to push into the stack : ");
        scanf("%d",&stack[top]);
    }
    }
    if(in==2){
        top--;
        if(top<-1){
            printf("Stack Underflow!!!!!!\n");
            top++;
        }
    }
    if(in==3){
        printf("The elements : ");
         printf("\n=============\n");
        for(int i=top;i>-1;i--){
            printf("%d\n",stack[i]);
        }
         printf("\n=============\n");
    }
    if(in==4){
        printf("The program is exiting............\n");
        break;
    }
    if(in==1 || in==2){
        printf("The current elements in the stack : ");
        printf("\n============\n");
        for(int i=top;i>-1;i--){
            printf("%d.\n",stack[i]);
        }
        printf("\n=============\n");
    }
}
return 0;
}
