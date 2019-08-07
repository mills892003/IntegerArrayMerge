//  This is a merge program that takes in two custom size arrays and creates a combined unique integer list
//  Created by Milan Patel on 2/13/19.
//  Copyright © 2019 Milan Patel. All rights reserved.
//
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1000

int main()
{
    int a1[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, size1;
    
    // Input array size
    printf("Enter size of array 1: ");
    scanf("%d", &size1);
    
    // Input elements in array
    printf("Enter %d elements in the array : ", size1);
    for(i=0; i<size1; i++)
    {
        scanf("%d", &a1[i]);
    }
    
    int a2[MAX_SIZE]; // Declare an array of MAX_SIZE
    int size2;
    
    // Input array size
    printf("Enter size of array 2: ");
    scanf("%d", &size2);
    
    // Input elements in array
    printf("Enter %d elements in the array : ", size2);
    for(i=0; i<size2; i++)
    {
        scanf("%d", &a2[i]);
    }
    
    //Print all elements of array
    
    printf("\nElements in array 1 are: ");
    for(i=0; i<size1; i++)
    {
        printf("%d ", a1[i]);
    }
    
    printf("\nElements in array 2 are: ");
    for(i=0; i<size2; i++)
    {
        printf("%d ", a2[i]);
    }
    
    
    //Create temp_array3 which combines array 1 and array 2
    
    int temp_array3[MAX_SIZE];
    int k = 0;
    
    for(i = 0; i < size1 ; i++)
    {
        temp_array3[k] = a1[i];
        k++;
    }
    
    for(i = 0; i < size2 ; i++)
    {
        temp_array3[k] = a2[i];
        k++;
    }
    
    
    //Sort Array 3
  
    
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
    
    //Create Array 4 by taking out repeating elements
    int a3[MAX_SIZE];
    int q = 0;
    
    
    
    for(i=0 ; i <k; i++)
    {
       
        if(temp_array3[i] == temp_array3[i-1])
        {
            
        }
        else
        {
            a3[q] = temp_array3[i];
            q++;
        }
        
    }
    
    //print unique output array
    
    printf("\nOutput Array: ");
    for(i=0; i<q; i++)
    {
        printf("%d ", a3[i]);
    }
    
    return 0;
}
