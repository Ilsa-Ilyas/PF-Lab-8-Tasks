#include <stdio.h>
int main() {
    int arr[4][4];
    for(int i=0; i<4; i=i+1) {
        for(int j=0; j<4; j=j+1) {
            printf("\n Enter student data %d : ", i+1);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<4; i=i+1) {
        for(int j=0; j<4; j=j+1) {
            if(arr[i][j] < 0) {
                arr[i][j] = 0;
            }
        }
    }
    printf("\n");
    for(int i=0; i<4; i=i+1) {
        for(int j=0; j<4; j=j+1) {
            printf("%d", arr[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}