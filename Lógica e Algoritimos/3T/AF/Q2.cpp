/******************************************************************************

    Code by: TheRotationSpecialist (aka. OfitzerKGB; aka. Russo; aka. Wiredista)
     - GitHub: https://github.com/Wiredista
     - E-mail: alvaro.antonio@bk.ru
 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Animal {
    private:
        string nome, raca;
        char sexo;
        int peso;

    public:
        Animal(string n, char s, string r, int p) {
            nome = n;
            sexo = s;
            raca = r;
            peso = p;
        }
        // Why don't just use 'objeto.nome;' instead of 'objeto.getNome();' ?
        // Setters
        void setNome(string n) {  nome = n; }
        void setSexo(char s) {    sexo = s; }
        void setRaca(string r) {  raca = r; }
        void setPeso(int p) {     peso = p; }
        
        // Getters (doesn't these things have a better name?)
        string  getNome() { return nome; }
        char    getSexo() { return sexo; } 
        string  getRaca() { return raca; }
        int     getPeso() { return peso; }
};


int main() {
    Animal dog1("Floyd", 'M', "Vira-Lata", 10);
    Animal cat1("Annie", 'F', "Carey", 1);
    Animal cat2("Simba", 'M', "Maine Coon", 2);
}
