#include <stdio.h>
int main () {
	int m , n;
	printf("Enter number of rows m: ");
    scanf("%d", &m);
    printf("Enter number of columns n: ");
    scanf("%d", &n);
    int matrice1[m][n], matrice2[m][n], result[m][n];
    printf("Enter elements of the first matrice (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrice1[i][j]);
        }
    }
  printf("Enter elements of the second matrice (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrice2[i][j]);
        }
    }
	for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }
       printf("Result of adding matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}