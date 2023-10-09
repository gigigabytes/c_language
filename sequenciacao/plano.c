/* Escreva um programa que, tendo como dados de entrada dois pontos quaisquer do
plano, P(x1, y1) e Q(x2, y2), imprima a distância entre eles. A fórmula que efetua tal cálculo é: √(x1−x2)2 +( y1−y2) */

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    // Solicita ao usuário que insira as coordenadas dos pontos P e Q
    printf("Digite as coordenadas do ponto P (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do ponto Q (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calcula a distância usando a fórmula
    double distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    // Exibe a distância
    printf("A distância entre os pontos P e Q é: %lf\n", distancia);

    return 0;
}
