/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações número de anos que ele fuma, quantidade de cigarros fumados por dia e preço de
uma carteira. */

#include <iostream>
using namespace std;

int main(){
    /*
    anos = tempo que o usuario fuma
    quantC = quantidade de cigarros fumado por dia
    preco = preço da carteira de cigarro
    */
    int anos, quantC, cigarros;
    float preco;

    cout << "\nA quantos anos você fuma? ";
    cin >> anos;

    cout << "\nQuantos cigarros você fuma por dia? ";
    cin >> cigarros;

    cout << "\nQual o preco da carteira de cigarro? ";
    cin >> preco;

    cout << "\nQuantos cigarros tem em uma carteira de cigarro? ";
    cin >> quantC;

    preco /= quantC;

    cout << "\nVocê gastou R$" << ((anos * 365) * cigarros) * preco << " em cigarros.\n\n";
}