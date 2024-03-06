/*
Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros. 
*/

#include <iostream>
using namespace std;

int main(){
    int prestacao;
    float preco, valorFinal;

    cout << "\nQual o preço do produto? ";
    cin >> preco;

    do{
        cout << "\nDeseja parcelar em quantas prestações? ";
        cin >> prestacao;

        if(prestacao <= 0 || prestacao >= 11){
            cout << "\nAs lojas Sua Melhor Compra parcelam em no máximo 10 vezes sem juros, por favor informe novamente a quantidade de prestações\n";
        }

    }while(prestacao <= 0 || prestacao >= 11);
    
    valorFinal = preco/prestacao;

    cout << "O valor de cada prestação será de: R$" << valorFinal;
}