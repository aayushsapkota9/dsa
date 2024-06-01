#include<stdio.h>
#include<stdlib.h>

int main(){
  int i;
  int size;
  int* ptr;
  printf("Enter the size of elements:");
  scanf("%d",&size);

  ptr=(int*)calloc(size, sizeof(int));
// ptr = (int*)malloc(size * sizeof(int)); 

  if(ptr==NULL)
  {
    printf("Memory no allocated.\n ");
  }else{

    printf("Memory successfully allocated using malloc.\n");
    for(int j=0;j<=size;j++)
    {

      ptr[j]=j+1;

    }

    printf("The elements of the array are:");
    for(int k=0;k<size;k++)
    {
      printf("%d",ptr[k]);

    } 
  }
  free(ptr);
  return 0;
}

