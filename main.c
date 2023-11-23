#include <stdio.h>

void needForSpeed();
float lerDistancia();
float lerTempo();
float calcularVelocidade(float, float);
void mostrarVelocidade(float);

int main(){
    needForSpeed();
    return 0;
}

void needForSpeed(){
    float dist,temp, velocidade;
    dist = lerDistancia();
    temp = lerTempo();
    velocidade = calcularVelocidade(dist, temp);
    mostrarVelocidade(velocidade);
}

float lerDistancia(){
    float dist;
    printf("distancia percorrida pelo veiculo: \n");
    scanf("%f",&dist);
    return dist;
}

float lerTempo(){
    float temp;
    printf("tempo necessario para completar a prova: \n");
    scanf("%f",&temp);
    return temp;
}

float calcularVelocidade(float dist, float temp){
    float velocidade;
    velocidade =  dist / temp;
    return velocidade;
}

void mostrarVelocidade(float velocidade){
    printf("a velocidade eh de: %.0f", velocidade);
}





