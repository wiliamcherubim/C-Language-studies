// Code file created by C Code Develop

#include "stdio.h"
#include "stdlib.h"
#include "string.h"


typedef struct{
        int idade;
        char sexo;
        char nome[100];

}Pessoa;

typedef    struct{
        int idade;
        char sexo;
        char nome[100];
}Pessoa2;

int main() {
    Pessoa pessoa1;
      Pessoa2 pessoa2;
    
    
    pessoa1.idade = 35;
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome, "Maria");
    
    printf("\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    
    pessoa2.idade = 43;
    pessoa2.sexo = 'm';
    strcpy(pessoa2.nome, "Joao");
    
    printf("\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);
    
    
    
    return 0;
   
}
