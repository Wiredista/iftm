/******************************************************************************

    Code by: TheRotationSpecialist (aka. OfitzerKGB; aka. Russo; aka. Wiredista)
     - GitHub: https://github.com/Wiredista
     - E-mail: alvaro.antonio@bk.ru
 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Disciplina {
    private:
        int codigo, capacidade, inscritos = 0;
        string nome;
    
    public:
        Disciplina(int cod, string n, int cap) {
            codigo = cod;
            nome = n;
            capacidade = cap;
        }
        
        int Subscribe() {
            if(capacidade > inscritos) {
                inscritos++;
                return 1;
            }
            else return 0;
        }
        
        void Imprimir() {
            cout << nome << " contém " << inscritos << " alunos.\n";
        }
        
        // AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAHHHHH!
        string getNome() { return nome; }
        int     getCap() { return capacidade; } 
        int     getCod() { return codigo; }
        int     getIns() { return inscritos; }
        
        void setNome(string i) { nome = i; }
        void setCap(int i)  {    capacidade = i; }
        void setCod(int i)  {    codigo = i; }
};


int main() {
    int cod, cap;
    string nome;
    
    cout << "Codigo: ";
    cin >> cod;
    cout << "Nome: ";
    cin >> nome;
    cout << "Capacidade: ";
    cin >> cap;
    
    Disciplina dip(cod, nome, cap);
    cout << (dip.Subscribe() ? "Inscrito com sucesso.\n" : "Disciplina sem capacidade para novos alunos.\n");
    cout << (dip.Subscribe() ? "Inscrito com sucesso.\n" : "Disciplina sem capacidade para novos alunos.\n");
    cout << (dip.Subscribe() ? "Inscrito com sucesso.\n" : "Disciplina sem capacidade para novos alunos.\n");
    dip.Imprimir();
    
}

// A cada 10 minutos um programador Python morre ao ser obrigado a usar ponto e vírgula
// Diga não ao ponto e vírgula e acabe com isso.
