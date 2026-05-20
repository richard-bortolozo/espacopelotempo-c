#include <stdio.h>

float espacopelotempo(float velocidade, float tempo, float aceleracao);

int main() {
    if (espacopelotempo(80, 2, 0) != 160) {
        printf("Erro no primeiro teste\n");
        return 1;
    }

    if (espacopelotempo(40, 2, 0) != 80) {
        printf("Erro no segundo teste\n");
        return 1;
    }

    if (espacopelotempo(40, 2, 3) != 86) {
        printf("Erro no terceiro teste\n");
        return 1;
    }

    printf("Todos os testes passaram!\n");
    printf("Criado por Richard Bortolozo");
    return 0;
}
