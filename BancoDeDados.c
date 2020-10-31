#include <stdio.h>
#include <string.h>
typedef struct{
    int idade, amigos, fotos;
    char nome[55];
    char sexo, ecivil;

    
}personagem;

int main(){
    int n, i;
    personagem monstro[500];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &monstro[i].idade);
        scanf(" %52[^\n]", monstro[i].nome);
        scanf(" %c", &monstro[i].sexo);
        scanf(" %c", &monstro[i].ecivil);
        scanf("%d", &monstro[i].amigos);
        scanf("%d", &monstro[i].fotos);
        
    }

    for(i=0;i<n;i++){
        printf("Idade: %d\n", monstro[i].idade);
        printf("Nome: %s\n", monstro[i].nome);
        printf("Sexo: %c\n", monstro[i].sexo);
        printf("Estado Civil: %c\n", monstro[i].ecivil);
        printf("Numero de amigos: %d\n", monstro[i].amigos);
        printf("Numero de fotos: %d\n", monstro[i].fotos);
        printf("\n");
    }

    return 0;
}
