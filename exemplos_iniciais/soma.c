#include <stdio.h>

int soma(int a, int b){
    int s;
    s = a+b;
    return s;
}

int main(){
    
    int x, y,z;
    scanf("%d", &y);
    scanf("%d", &z);
    x = soma(y, z);
    printf("A soma eh %d\n ", x);

    return 0;
}