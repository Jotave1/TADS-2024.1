/*Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10. */

#include <iostream>
using namespace std;

int main(){
    int val1, val2, aux;

    cout << "\n Diga o valor da val1 e da val2 respectivamente: ";
    cin >> val1 >> val2;

    aux = val1;
    val1 = val2;
    val2 = aux;

    cout << "\n Os valores trocados serão: val1 = " << val1 << " e val2 = " << val2;
}