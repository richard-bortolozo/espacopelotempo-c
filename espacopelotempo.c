#include <stdio.h>

float espacopelotempo(float velocidade, float tempo, float aceleracao);

int main() {
    float velocidade;
    float tempo;
    float aceleracao;
    float espaco;
    int temAceleracao;

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    printf("Digite o tempo: ");
    scanf("%f", &tempo);

    printf("Tem aceleracao? Digite 1 para sim ou 0 para nao: ");
    scanf("%d", &temAceleracao);

    if (temAceleracao == 1) {
        printf("Digite a aceleracao: ");
        scanf("%f", &aceleracao);
    } else {
        aceleracao = 0;
    }

    espaco = espacopelotempo(velocidade, tempo, aceleracao);

    printf("A distancia percorrida foi %.2f\n", espaco);

    printf("Criado por Richard Bortolozo");
    return 0;
}
