#include <stdio.h>

    //Desafio de Xadrez - MateCheck
    
    
    // Função recursiva para Torre
    void torre(int casas) {
        if (casas > 0) {
            printf("Direita\n");
            torre(casas - 1);
        }
    }
    
        
     // Função recursiva para  Bispo
void bispo(int casas) {
    if (casas > 0) {
        printf("Cima e Direita\n");
        bispo(casas -1);
    }
}

// Função recursiva Rainha
void rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

// Função para  Cavalo
void cavalo() {
    int i, j;
    for (i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}


int main() {
    int escolha;

    printf("**Escolha qual peça queira jogar!!**\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");

    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            torre(5);
            break;
        case 2:
            bispo(5);
            break;

       
         case 3:
            rainha(8);
            break;
        case 4:
            cavalo(3);
            break;
       
            default:
            printf("Opção inválida, tente novamente\n");
            break;
    }

    return 0;
}
     
        
        
        
   