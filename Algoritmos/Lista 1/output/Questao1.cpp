/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. Obs: Considere cada mês com 30 dias.*/

#include <iostream>
using namespace std;

int main() {
  /*
    ano = inteiro que guarda a quantidade de dias em 1 ano
    mes = inteiro que guarda a quantidade de dias em 1 mes
    an0 = inteiro que guarda a quantidade de anos dita pelo usuario
    me5 = inteiro que guaarda a quantidade de meses dita pelo usuario
    dia = inteiro que guarda a quantidade de dias dita pelo usuario
  */
  int an0 = 0, me5 = 0, dia = 0;
  int ano = 365, mes = 30;

  cout << "\nDiga sua idade em anos, meses e dias: ";
  cin >> an0 >> me5 >> dia;

  if(an0 <= 0){
    cout << "\nErro: anos invalidos";

  }else if(me5 >= 12 || me5 < 0){
      cout << "\nErro: meses invalidos";

  }else if(dia < 0){
    cout << "\nErro: dias invalidos";

  }else{  
    cout << "\nSua idade em dias é: " << (ano * an0) + (mes * me5) + dia << " dias";
  }
}