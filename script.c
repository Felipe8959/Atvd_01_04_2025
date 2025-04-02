#include <stdio.h>

int main() {
    int vetor[] = {10, 20, 35, 50, 75};
    int alvo = 55;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[i] + vetor[j] == alvo) {
                printf("Os números %d (posição %d) e %d (posição %d) somam %d.\n",
                       vetor[i], i, vetor[j], j, alvo);
                return 0;
            }
        }
    }
    
    return 0;
}
