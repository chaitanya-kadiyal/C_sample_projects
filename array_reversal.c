#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*function to reverse the array elements
*
/

int* reverseArray(int a_count, int* a, int* result_count) 
{
    int i=0,j =0;
    int temp = 0;
    j = a_count;
    
    if(a_count > 0)
    {
      for(i=0;(i != j);i++)
      {
          temp = a[i];
          a[i] = a[j-1];
          a[j-1] = temp;
          temp = 0;
          if(i > j)
          {
              break;
          }
          j--;
      }
    }
    *result_count = i+j;
    return a;
}

int main()
{
    int arr_count = 5;
    int* arr = malloc(arr_count * sizeof(int));
    
    for (int i = 0; i < arr_count; i++) 
    {
        int arr_item = i+1 ;
        *(arr + i) = arr_item;
    }
    
    printf("\n input \n");
    for (int i = 0; i < arr_count; i++) 
    {
        printf("%d \t", *(arr + i));
    }
    printf("\n array length %d \n", arr_count);
    
    int res_count;
    int* res = reverseArray(arr_count, arr, &res_count);
    
    printf("\n output \n");
    for (int i = 0; i < res_count; i++) 
    {
        printf("%d \t", *(res + i));
    }
    printf("\n array length %d \n", res_count);
    free(arr);
    return 0;
}
