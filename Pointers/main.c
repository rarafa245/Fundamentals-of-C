#include <stdio.h>
#include <stdlib.h>

void minha_funcao1(int *p) ;
char *minha_funcao2(char c, char *s) ;


int main()
{
    //Criação de Variavel
    //int valor = 3;

    //Criação de ponteiro e apontamento para variavel anterior
    int *point_int;

    //Manobras simples com ponteiros:
    /*printf("Ponteiro Aponta para um endereço de memória: point_int = &valor; \n");
    point_int = &valor;

    //Amostragem de Valores e padrões
    printf("Valor da variavel: valor = %d \n", valor);
    printf("Endereço de memória da variavel: &valor = %d \n", &valor);
    printf("Valor apontado pelo ponteiro: *point_int = %d\n", *point_int);
    printf("Endereço de memória do valor apontado: point_int = %d\n", point_int);
    printf("Endereço de memória do ponteiro: &point_int = %d\n", &point_int);

    *point_int = 70;
    printf("Mudança de valor de ponteiro: *point_int = 70; \n");
    printf("Valor apontado pelo ponteiro: *point_int = %d\n", *point_int);
    printf("Valor da variavel: valor = %d\n", valor);
    */

    //Ponteiros com Vetores:
    /*
    int vet[7];
    u_int8_t i;
    printf("Vetor: ");
    for(i=0; i< 8; i++){
        vet[i] = i;
        printf("%d ", vet[i]);
    }
    printf("\n");

    point_int = &vet;
    printf("primeiro valor do ponteiro: %d\n", *point_int);
    printf("primeiro valor do quarto: %d\n", *(point_int + 3));

    printf("Printando Vetor: ");
    for(i=0; i<8; i++) printf("%d ", *(point_int + i));
    */

    //Ponteiros com Funções:
    /*int vet[7];
    u_int8_t i;
    printf("Vetor: ");
    for(i=0; i< 8; i++){
        vet[i] = i;
        printf("%d ", vet[i]);
    }
    printf("\n");
    minha_funcao1(vet);

    for(i=0; i<8; i++) printf("%d ", vet[i]);
    */

    //Retornando um Ponteiro
    /*char s[80], *p, ch;
    gets(s);
    ch = getchar();
    p = minha_funcao2(ch,s);
    if(*p){
        int i=0;
        while(*(p+i)){
            printf("%c ",*(p + i));
            ++i;
        }
     }
    else printf("Não Achei!");
    */

    return 0;
}


void minha_funcao1(int *p){
    printf("Alterando o valor 4 da função\n");
    *(p+3) = 99;
}

char *minha_funcao2(char c, char *s){
    while(c != *s && *s) s++;
    return s;
}


