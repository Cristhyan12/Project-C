#include <stdio.h>

int main() {
    int a,ant,suc;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    
    ant = a - 1;
    
    suc = a + 1;
    
    printf("O antecessor eh: %d\n", ant);
    printf("O sucessor eh: %d", suc);
    
    return 0;
}
