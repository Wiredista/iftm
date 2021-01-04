/******************************************************************************

    Code by: TheRotationSpecialist (aka. Russo; aka. Wiredista)
     - GITHUB:  https://github.com/Wiredista
     - EMAIL:   alvaro.antonio@bk.ru
    
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

class Elevador {
    private:
        int andar;
        int maxAndar;    // Num. de andares no prédio.
        int pessoas;
        int maxPessoas; // Capacidade.
    public:
        // Class constructor
        Elevador(int capPessoas, int qntAndar) {
            maxAndar = qntAndar;
            maxPessoas = capPessoas;
            andar = 0;
            pessoas = 0;
        }
        
        // Commands
        void entra() {
            if(maxPessoas > pessoas) pessoas += 1;
        }
        void sai() {
            if(pessoas > 0) pessoas -= 1;
        }
        void sobe() {
            if(maxAndar > andar) andar += 1; // Para cima e além!
        }
        void desce() {
            if(andar > 0) andar -= 1;
        }
        void imprime() {
            cout << "Situação atual: \nAndar do Elevador: " << andar << " Quantidade de Pessoas: " << pessoas << "\n";
        }
};

int main() {
    int capPessoas, numAndares;
    cout << "Inicializando elevador... \n";
    cout << "Capacidade: \n";
    cin >> capPessoas;
    cout << "Andar máximo: \n";
    cin >> numAndares;
    
    Elevador elev(capPessoas, numAndares); // Warranty void more the button is pressed twice.
    
    cout << "Por favor, entre com uma das opções:\nI: Entrar\nO: Sair\nU: Subir\nD: Descer\nP: Imprimir\nS: Parar o programa.";
    
    while(1) {
        cout << "Comando: ";
        char opcao;
        cin >> opcao;
        bool flag = 0;
        switch(opcao) {
            case 'I':
                elev.entra();
                break;
            case 'O':
                elev.sai();
                break;
            case 'U':
                elev.sobe();
                break;
            case 'D':
                elev.desce();
                break;
            case 'P':
                elev.imprime();
                break;
            case 'S':
            //  elev.shutdown()... No, WAIT!
                flag = 1;
                break;
            default:
                cout << "Comando inválido!\n";
        }
        if(flag) break;
    }
}
