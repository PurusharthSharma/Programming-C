//      C Program to print the Z Pattern


#include <stdio.h> 
  

void alphabet_Z_Pattern(int N) 
{ 
    int index, side_index, size; 
  
  
    int Top = 1, Bottom = 1, Diagonal = N - 1; 
  
  
    for (index = 0; index < N; index++) 
        printf("%d ", Top++); 
  
    printf("\n"); 
  
  
    for (index = 1; index < N - 1; index++) { 
  
     
        for (side_index = 0; side_index < 2 * (N - index - 1); 
             side_index++) 
            printf(" "); 
  
      
        printf("%d", Diagonal--); 
  
        printf("\n"); 
    } 
  
 
    for (index = 0; index < N; index++) 
        printf("%d ", Bottom++); 
} 
  

int main() 
{ 
    // Size of the Pattern 
    int N = 5; 
  
    alphabet_Z_Pattern(N); 
  
    return 0; 
} 
