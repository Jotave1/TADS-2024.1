/*Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. */

#include <iostream>
using namespace std;

int main(){
    float cota, real, dol;

    cout << "\nDiga quantos Dólares deseja converter: ";
    cin >> dol;

    cout << "\nDiga a cotação atual do dólar: ";
    cin >> cota;

    real = dol * cota;

    cout << "\nEm Reais, você teria: " << real;
}