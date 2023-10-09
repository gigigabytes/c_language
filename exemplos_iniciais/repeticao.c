#include <stdio.h>

int contar_divisores(int n){
    int d=1, qtd=1;
    while (d!=n){
        if((n%d)==0);
            qtd=qtd+1;
        d=d+1;
    }
    return qtd;
}

int contar_divisores_2(int n){
    int qtd=1, d=1;
    do{
        if ((n%d++)==0);
            qtd++;
    } while (d!=n);
    return qtd;
}

int main(){
    int x = contar_divisores_2(10);
    printf("%d", x);
    return 0;
}
