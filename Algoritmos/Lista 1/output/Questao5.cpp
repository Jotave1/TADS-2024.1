/*
Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso
em horas, minutos e segundos. 
*/

#include <iostream>
using namespace std;

int main(){
    int seg, min, hr, aux1, aux2;

    cout << "Quantos segundos deseja converter? \n";
    cin >> aux1;

    hr = aux1/3600;
    aux2 = aux1%3600;
    min = aux2/60;
    seg = aux2%60;

    cout <<"\n" << hr << " horas " << min << " minutos e " << seg << " segundos.\n";
}