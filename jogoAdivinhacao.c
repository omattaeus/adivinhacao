#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero_secreto, chute, tentativa = 10;
    bool acertou = false;
    
    srand(time(NULL));
    numero_secreto = rand() % 101;
    
    printf("Bem-vindo ao jogo de adivinha��o!\n\n");
    
    do {
        printf("Digite um n�mero de 0 a 100 e tente adivinhar: ");
        scanf("%d", &chute);
    
        if (chute == numero_secreto) {
            acertou = true;
        } else if (chute > numero_secreto) {
            printf("Chute muito alto!\n");
        } else {
            printf("Chute muito baixo!\n");
        }
    
        printf("\n");
    
    } while (!acertou && tentativa-- > 1);
    system("cls");
    if (acertou) {
        printf("-------------------------------------------------------\n");
        printf("   PARAB�NS! Voc� acertou e ganhou uma coca-cola!\n");
        printf("-------------------------------------------------------\n");
        printf("O n�mero correto �: %d\n", numero_secreto);
        printf("Voc� acertou em %d tentativa(s)\n", 10 - tentativa);
    } else {
        printf("\n----------------------------------------------\n");
        printf("    Que pena! Voc� errou, tente novamente.\n");
        printf("------------------------------------------------\n");
        printf("O n�mero correto �: %d\n", numero_secreto);
        printf("Voc� usou todas as suas tentativas. Melhor sorte na pr�xima vez!\n");
    }
    system("pause");
	return 0;

}
