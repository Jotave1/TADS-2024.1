/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de
fábrica de um carro e escreva o custo ao consumidor. */

#include <iostream>
using namespace std;

int main(){
    float custo, valorC, distrib = 0.28, impos = 0.45;

    cout << "\nDiga o valor do carro: ";
    cin >> valorC;

    custo = valorC + (valorC * distrib) + (valorC * impos);

    cout << "\nO preco do carro ficou: R$" << custo;
}