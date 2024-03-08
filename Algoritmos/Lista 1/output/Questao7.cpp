/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius. */

#include <iostream>
using namespace std;

int main(){
    int celsius, fahren;

    cout << "\nDiga a temperatura em Celsius: ";
    cin >> celsius;

    fahren = (9*celsius+160)/5;

    cout << "\n A temperatura dita, em Fharenheit é: " << fahren << "F";
}