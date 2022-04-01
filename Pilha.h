

class Pilha {
    private:
        int contador;
        int capacidade;
        int conteudo[MAX];
        char conteudoTXT[MAX];
    public:
        Pilha();
        bool vazia();
        bool cheia();
        bool empilharTxt(char valor1);
        bool empilhar(int valor);
        bool desempilhar(int &valor);
        bool retornaTopo(int &valor);
        bool inverte();
        bool maior(int &valor);
        bool menor(int &valor);
        bool media(int &valor);
        bool impares();
        bool palindromo(char &valor1);
        bool inverteTXT(char &valor1);
        void mostrarP();
        void mostrarPTXT();

};

