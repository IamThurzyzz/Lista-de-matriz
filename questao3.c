#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[2][3];
    int i, j;
    int soma = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o elemento da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    printf("Soma dos elementos: %d\n", soma);

    return 0;
}
