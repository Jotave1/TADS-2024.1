/*
Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número. 
*/

#include <iostream>
using namespace std;

int main(){

    /*
    N = valor dito pelo usuario
    percent = porcentagem por multiplicação
    vFinal = valor final após pegar a porcentagem
    */
    int n;
    float percent, vFinal;

    cout << "\nDiga um numero inteiro: ";
    cin >> n;

    cout << "\nAgora diga a porcentagem que deseja saber com apenas números: ";
    cin >> percent;

    percent /= 100;
    vFinal = n * percent;

    cout << "\nNúmero inteiro após aplicar a porcentagem indicada: " << vFinal;

}