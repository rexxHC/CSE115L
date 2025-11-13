#include <stdio.h>

int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++) {
            printf(" ");
        }
        for (int hex = 1; hex <= n; hex++) {
            
            if( hex == 1 || i == 1 || hex == n || i == n){
                printf("#");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
