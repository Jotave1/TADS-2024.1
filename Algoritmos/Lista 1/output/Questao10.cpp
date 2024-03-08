/* Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração,
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção
(E) e disjunção (OU), apresentando ao final os resultados obtidos. */

#include <iostream>
using namespace std;

int main(){
    int a, b;
    int adic, subt, mult, divi;
    bool c, d;
    bool negaC, negaB, conju, disju;

    cout << "\nDiga os valores de A e B respectivamente: ";
    cin >> a >> b;

    adic = a+b;
    subt = a-b;
    mult = a*b;
    divi = a/b;

    cout << "\nOs valores de A e B depois das operações são: \nAdição = " << adic << "\nSubtração = " << subt << "\nMultiplicação = " << mult << "\nDivisão = " << divi;

    cout << "\n\nDiga um valor lógico para C e D rspectivamente (0 = falso, 1 = verdadeiro): ";
    cin >> c >> d;

    negaC = !c;
    negaB = !b;
    conju = c && b;
    disju = c || b;

    cout << "\nOs valores de C e D depois das operações são: \nNegação de C = " << negaC << "\nNegação de B = " << negaB << "\nConjunção = " << conju << "\nDisjunção = " << disju;

}