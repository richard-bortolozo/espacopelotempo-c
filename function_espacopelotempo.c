float espacopelotempo(float velocidade, float tempo, float aceleracao) {
    float espaco;

    espaco = (velocidade * tempo) + (aceleracao * tempo * tempo) / 2;

    return espaco;
}
