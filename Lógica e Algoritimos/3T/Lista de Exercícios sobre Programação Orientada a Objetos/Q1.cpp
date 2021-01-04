/******************************************************************************

    Code by: TheRotationSpecialist (aka. Russo; aka. Wiredista)
     - GITHUB:  https://github.com/Wiredista
     - EMAIL:   alvaro.antonio@bk.ru
    
*******************************************************************************/


// PS: Por algum motivo as streams 'cin' e 'cout' conseguem manipular numeros 'int' mas não conseguem manipular dados 'uint8_t'... :thinking:

#include <bits/stdc++.h>
using namespace std;

class Relogio {
    private:
        int hora = 0, minuto = 0, segundo = 0; // Meia noite, horário oficial do óleo de macaco.
        void fixTime() {
            if(segundo >= 60) {
                minuto += segundo / 60;
                segundo %= 60;
            }
            if(minuto >= 60) {
                hora += minuto / 60;
                minuto %= 60;
            }
            if(hora >= 24) {
                hora %= 24;
            }
        }
    
    public:
        int setHorario(int h, int m, int s) {
            bool flag;
            flag = (h >= 0 && h <= 24 && m >= 0 && m <= 60 && s >= 0 && s <= 60);
            if(flag) hora = h, minuto = m, segundo = s;
            return flag;
        }
        void addTime(int h, int m, int s) {
            hora += h;
            minuto += m;
            segundo += s;
            fixTime();
        }
        void avancar() {
            addTime(0,0,1);
        }
        void imprimirHorario() {
            cout << "Hora atual : " << hora << ":" << minuto << ":" << segundo << "\n";
        }
};

int main()
{
    cout << "Entre com a hora, minuto e segundo: ";
    int h, m, s;
    cin >> h >> m >> s;
    cout << "Entre com uma das opções: \n";
    cout << "A (Avancar o horario)\nU (Atualizar)\nM (Mostrar a hora atual)\nF (Finalizar o programa):\n";

    Relogio rtc; // Not a real Real Time Clock
    rtc.setHorario(h,m,s);
    
    while(1) {
        cout << "Opção: ";
        char opcao;
        cin >> opcao;
        bool flag = 0;
        switch(opcao) {
            case 'A':
                rtc.avancar();
                break;
            case 'U':
                cout << "Entre com a hora, minuto e segundo: ";
                cin >> h >> m >> s;
                if(!rtc.setHorario(h,m,s)) cout << "Entrada inválida!\n";
                break;
            case 'M':
                rtc.imprimirHorario();
                break;
            case 'F':
                flag = 1; // RAISE THE FLAGS!
                break;
            default:
                cout << "Entre com um opção válida. \n";
                break;
        }
        
        if(flag) break; // Captain, do you see a flag?
    }
}
