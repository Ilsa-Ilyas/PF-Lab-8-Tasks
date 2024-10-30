#include <stdio.h>
int main() {
    int arr[3][3], sp = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\nEnter data for Row %d: ", i + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        sp = 0; 
        for (int j = 0; j < 3; j++) {
            sp += arr[i][j];
        }
        printf("\nScore of participant %d: %d", i + 1, sp);
    }
    for (int i = 0; i < 3; i++) {
        sp = 0; 
        for (int j = 0; j < 3; j++) {
            sp += arr[j][i];
        }
        printf("\nScore of activity %d: %d", i + 1, sp);
    }
    return 0;
}
