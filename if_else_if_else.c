#include<stdio.h>

int main() {
    int nota;
    printf("Digite sua nota: \n");
    scanf("%d", &nota);

    if (nota <= 100 && nota >= 90) {
        printf("Você tirou um S.");
    }
    else if (nota < 90 && nota >= 80){
        printf("Você tirou um A.");
    }
    else if (nota < 80 && nota >= 70){
        printf("Você tirou um B.");
    }
    else if (nota < 70 && nota >= 60){
        printf("Você tirou um C.");
    }
    else if (nota < 60 && nota > 50){
        printf("Você tirou um D.");
    }
    else if (nota == 50){
        printf("Você tirou um E.");
    }
    else if (nota < 50 && nota >= 0){
        printf("Você tirou um U.");
    }
    else {
        printf("Digite um número válido entre 0 e 100.");
    }
}