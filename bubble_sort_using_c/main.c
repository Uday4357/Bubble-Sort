/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void bubble_sort(int *arr, int size);

int main()
{
    int arr[5] = {3,2,5,1,0};
    
     bubble_sort(arr,5);
     
     for(int i = 0; i < 5; i++)
     {
         printf("%d ", arr[i]);
     }

    
    return 0;
}

void bubble_sort(int *arr, int size)
{
    int i,j,temp;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+ 1] = temp;
            }
        }
    }

}

