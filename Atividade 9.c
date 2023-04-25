#include <stdio.h>

int main() {
    int num, i = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    
    printf("Tabuada do %d:\n", num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    
    return 0;
}
