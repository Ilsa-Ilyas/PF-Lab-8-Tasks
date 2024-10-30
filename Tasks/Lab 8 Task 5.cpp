#include <stdio.h>

int main() {
    int scores[4][4]; 
    printf("Enter the scores for the teams (4x4 matrice):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &scores[i][j]);
        }
    }
    for (int j = 0; j < 4; j++) { 
        for (int i = 0; i < 4 - 1; i++) { 
            for (int k = 0; k < 4 - 1 - i; k++) { 
                if (scores[k][j] > scores[k + 1][j]) {
                    int temp = scores[k][j];
                    scores[k][j] = scores[k + 1][j];
                    scores[k + 1][j] = temp;
                }
            }
        }
    }
    printf("Matrice in ascending order by columns:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) { 
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }
    return 0;
}
