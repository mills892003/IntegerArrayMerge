//  Created by Milan Patel on 2/24/19.
//  Copyright © 2019 Milan Patel. All rights reserved.
//
//  This is a merge program that takes in two custom size arrays and creates a combined unique integer array.
//  Includes a specific function void merge(int a1[], int size_a1, int a2[], int size_a2, int unique[], int * size_u);


#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1000


void merge(int a1[], int size_a1, int a2[], int size_a2, int unique[], int * size_u);

int main(void)
{

    int a1[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, size_a1;
    
    // Input array size
    printf("Enter size of array 1: ");
    scanf("%d", &size_a1);
    
    // Input elements in array
    printf("Enter %d elements in the array : ", size_a1);
    for(i=0; i<size_a1; i++)
    {
        scanf("%d", &a1[i]);
    }
    
    int a2[MAX_SIZE]; // Declare an array of MAX_SIZE
    int size_a2;
    
    // Input array size
    printf("Enter size of array 2: ");
    scanf("%d", &size_a2);
    
    // Input elements in array
    printf("Enter %d elements in the array : ", size_a2);
    for(i=0; i<size_a2; i++)
    {
        scanf("%d", &a2[i]);
    }
    
    /*
     //Print all elements of array
     
     printf("\nElements in array 1 are: ");
     for(i=0; i<size_a1; i++)
     {
     printf("%d ", a1[i]);
     }
     
     printf("\nElements in array 2 are: ");
     for(i=0; i<size_a2; i++)
     {
     printf("%d ", a2[i]);
     }
     */
    
    int unique[size_a1+size_a2];    // Declare unique array with maximum possible size
    int m = 0;
    int *size_u = &m;                     // Declare size variable for unique array
    
    merge(a1, size_a1, a2, size_a2, unique, size_u);   // Call merge function and send pointer
    
    printf("\n\nThe size of the unique array is: %d" , *size_u);
    
    return 0;
}


void merge(int a1[], int size_a1, int a2[], int size_a2, int unique[], int *size_u) //merge function
{
    
    //Create temp_array3 which combines array 1 and array 2
    
    int temp_array3[MAX_SIZE];
    int k = 0;
    int i = 0;
    
    for(i = 0; i < size_a1 ; i++)
    {
        temp_array3[k] = a1[i];
        k++;
    }
    
    for(i = 0; i < size_a2 ; i++)
    {
        temp_array3[k] = a2[i];
        k++;
    }
    
    
    //Sort temp_array3
    
    
    int j=0;
    int a=0;
    
    for (i = 0; i < k; ++i)
    {
        for (j = i + 1; j < k; ++j)
        {
            if (temp_array3[i] > temp_array3[j])
            {
                a =  temp_array3[i];
                temp_array3[i] = temp_array3[j];
                temp_array3[j] = a;
            }
        }
    }
    
    
    //Create unique taking out repeating elements
    
    *size_u = 0;    //default
    int q = 0;  // counter

    for(i=0 ; i <k; i++)
    {
        
        if(temp_array3[i] == temp_array3[i-1])
        {
            
        }
        else
        {
            unique[q] = temp_array3[i];
            q++;
        }
        
    }
    
    *size_u = q;        //pointer value
    
    //print unique output array
    
    printf("\nOutput Array: ");
    for(i=0; i<*size_u; i++)
    {
        printf("%d ", unique[i]);
    }

}
