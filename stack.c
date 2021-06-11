

//Stack using array 12/05/20

#include <stdio.h>

int stack[100],top=-1,size;

int pop(){
    if (top == -1)
    {
        printf("Stack underflow!!");
        return 0;
    }else{
        return stack[top--];
    }
}

int peek(){
    if (top == -1)
    {
        printf("Stack underflow!!");
        return 0;
    }else{
        return stack[top];
    }
}

void push(int item){
    if (top == size-1)
        printf("\nStack Overflov!!");
    else{
        stack[++top] = item;
    }

}

void display(){
    for (int i = top; i >= 0; i--)
    {
        printf("%d\t",stack[i]);
    }
    
}
int main()
{
    int flag = 1,ch;
    char co;

    printf("\nEnter size of stack : ");
    scanf("%d",&size);

    
    while (flag == 1)
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.View Stack\n\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter item : ");
            int item;
            scanf("%d",&item);
            push(item);
            break;
        
        case 2:printf("Item popped : %d",pop());
        
            break;
        
        case 3:printf("Top Item : %d",peek());
        
            break;

        case 4:display();
            break;
        
        default:printf("\nDefault");
            break;
        }

        printf("\nPress Y to continue... ");
        scanf(" %c",&co);

        if (co == 'y' || co == 'Y')
            flag = 1;
        else
            flag = 0;
    }
    
    return 0;
}
