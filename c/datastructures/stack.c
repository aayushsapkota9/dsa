#include <stdio.h>
#define MAX 4

int stack_arr[MAX];
int top=-1;
void push (int data);
void pop();
int main()
{

  push(2);
  push(3);
  push(9);
  push(8);
  push(4);
  pop();
  pop();

  return 0;
}

void push(int data){

  if(top==MAX-1)
  {
    printf("Stack overflow");
    return ;
  }

  printf("%d is inserted into the stack \n",data);
  top=top+1;
  stack_arr[top]=data;
}

void pop()
{

  if(top==-1)
  {
    printf("Empty stack");
    return ;
  }
  printf("%d is poped from stack \n",stack_arr[top]);
  top=top-1;


}
