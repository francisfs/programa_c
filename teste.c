#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    char nome[100];

    printf("Digite seu nome: \n ");
    gets(nome);
    printf("Digita a idade: \n ");
    scanf("%i",&i);

    if (i >= 18)
    {
        printf("%s voce pode dirigir", nome);
    }
    else{
        printf("%s voce ainda vai andar a peh \n", nome);
    }
    system("pause");
    return 0;
}
