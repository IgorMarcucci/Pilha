#include <iostream>
using namespace std;
#define MAX 5
#include "Pilha.cpp"

//Realizado pelos alunos:
//Nome: Guilherme Lima
//Nome: Igor Marcucci

int main() {
    Pilha minhaPilha;
    int recebeValor;
    char recebeValorTXT;

    //Empilhar palindromo
    minhaPilha.empilharTxt('T');
    minhaPilha.empilharTxt('R');
    minhaPilha.empilharTxt('I');
    minhaPilha.empilharTxt('S');
    minhaPilha.empilharTxt('T');
    //Empilhar pilha em numeros
    //minhaPilha.empilhar(32);
    //minhaPilha.empilhar(42);
    //minhaPilha.empilhar(3);

    //minhaPilha.desempilhar(recebeValor);
    //minhaPilha.inverte();
    //minhaPilha.retornaTopo(recebeValor);
    //minhaPilha.media(recebeValor);
    //minhaPilha.mostrarP();
    //minhaPilha.impares();
    //minhaPilha.menor(recebeValor);
    //minhaPilha.maior(recebeValor);
    minhaPilha.inverteTXT(recebeValorTXT);
    minhaPilha.palindromo(recebeValorTXT);
    //minhaPilha.mostrarPTXT();
    return 0;
}



