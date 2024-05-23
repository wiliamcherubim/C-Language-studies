// Code file created by C Code Develop

#include "stdio.h"
#include "stdlib.h"

int main(){
    int A[10], B[10];
    int i;
    
    for(i = 0;  i < 10 ; i++)
    {
        printf("%d - Digite os dados para o vetor A: ", i);
        scanf("%d", &A[i]);
    }
    
    printf("\nSaida de dados do vetor A: \n");
    for(i = 0;  i < 10 ; i++)
    {
        printf("A[%d] = %d \n", i, A[i]);
        
    }
    
    printf("\nSaida de dados do vetor B: \n");
    for(i = 0;  i < 10 ; i++)
    {
        B[i] = A[i] * 10;
        printf("B[%d] = %d \n", i, B[i]);
        
    }
    
    return 0;
}