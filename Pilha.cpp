#include "Pilha.h"
#include <string>

int j = 0, i = 0, vet[MAX], med = 0, imp[MAX], maior1, menor1, cont = 0;
char vetTXT[MAX], aux[MAX];

Pilha::Pilha() {
    contador = 0;
    capacidade = MAX;
}

bool Pilha::vazia() {
    if (contador == 0) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::cheia() {
    if (contador == capacidade) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::empilhar(int valor) {
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool Pilha::empilharTxt(char valor1) {
    if (cheia())
        return false;
    conteudoTXT[contador] = valor1;
    contador++;
    return true;
}


bool Pilha::desempilhar(int &valor) {
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return true;
}

bool Pilha::retornaTopo(int &valor) {
    if (vazia())
        return false;
    valor = conteudo[contador-1];

    cout << valor;
    return true;
}

bool Pilha::inverte() {
    if (vazia()){
        return false;
    }
    else{
        for (i = contador - 1; i >= 0; i--) {
            vet[j] = conteudo[i];
            j++;
        }
        for (i = 0; i <= contador; i++) {
            conteudo[i] = vet[i];
        }
    return true;

    }
}

bool Pilha::media(int &valor){
    if (vazia()){
        return false;
    }
    else{
        for(i = 0; i < contador; i++){
            valor = valor + conteudo[i];
        }
        med = valor / contador;
        cout << "Media: " << med;

        return true;
    }
}

void Pilha::mostrarP(){

    for (int i = 0; i  < contador; ++i) {
        cout << conteudo[i] << endl;
    }
}

bool Pilha::impares() {
    if (vazia()) {
        return false;
    } else {
        for (int i = 0; i <= contador; ++i) {
            if (conteudo[i] % 2 == 1) {
                imp[j] = conteudo[i];
                j++;
            }
        }
        for (int i = 0; i < j; i++) {
            cout << imp[i] <<endl;
        }

        return true;

    }
}

bool Pilha::maior(int &valor){
    maior1 = conteudo[0];
    if (vazia()) {
        return false;
    } else {
        for(i = 0; i < contador; i++){
            if(conteudo[i] > maior1){
                maior1 = conteudo[i];
            }
        }
        cout << "O maior numero:" << maior1 << endl;
        return true;
    }

}

bool Pilha::menor(int &valor){
    menor1 = conteudo[0];
    if (vazia()) {
        return false;
    } else {
        for(i = 0; i < contador; i++){
            if(menor1 > conteudo[i]){
                menor1 = conteudo[i];
            }
        }
        cout << "o menor numero:" << menor1 << endl;

        return true;
    }

}

bool Pilha::inverteTXT(char &valor1) {
    if (vazia()) {
        return false;
    } else {

            for (i = (contador -1); i >= 0; i--) {
                aux[i] = conteudoTXT[i];
                vetTXT[j] = conteudoTXT[i];
                j++;
            }
            for (i = 0; i < contador; i++) {
                conteudoTXT[i] = vetTXT[i];
            }

        }
        return true;
    }



void Pilha::mostrarPTXT(){

    for (int i = 0; i  < contador; ++i) {
        cout << conteudoTXT[i];
        cout << endl;
    }
}

bool Pilha::palindromo(char &valor1) {
    if (vazia()) {
        return false;
    } else {
        for(int i = 0; i < contador; i++){
            if(aux[i] == conteudoTXT[i]) {
                cont++;
            }
        }

        if(cont == contador){
            cout << "eh um palindromo\n";
        } else {
            cout << "nao eh um palindromo\n";
        }
        return true;
    }
}






