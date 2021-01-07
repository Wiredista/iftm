#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Cliente {
  private:
    string nome, telefone;
    int tipo, minutos;

  public:
    Cliente() {
      return;
    }

    double calcularValorConta() { return minutos * (tipo+1); }
    
    // Setters
    void setNome(string i)     { nome = i; }
    void setTelefone(string i) { telefone = i; }
    int setTipo(int i)    { if(i >= 0 && i <= 2) { tipo = i; } return (i >= 0 && i <= 2); }
    int setMinutos(int i) { if(i >= 0 && i <= 10000) { minutos = i; } return (i >= 0 && i <= 10000); } 

    // Getters
    string getNome() { return nome; }
    string getTelefone() { return telefone; }
    int getTipo() { return tipo; }
    int getMinutos() { return minutos; }

};

Cliente Cadastrar() {
  Cliente c;
  string n, t;
  int tipo, m, flag = 0;
  cout << "Cadastro do cliente \n";
  cout << "Digite o nome: "; cin >> n; c.setNome(n);
  cout << "Digite o telefone: "; cin >> t; c.setTelefone(t);
  while(!flag) {
    cout << "Digite o tipo: "; cin >> tipo;
    flag = c.setTipo(tipo);
  } flag = 0;
  while(!flag) {
    cout << "Digite a quantidade de minutos consumidos: "; cin >> m;
    flag = c.setMinutos(m);
  } flag = 0;

  return c;
}

void geraMenu() {
  cout << "  1) Visualizar relatório de clientes\n  2) Visualizar a receita total da empresa\n  3) Quantidade de clientes que consumiram acima de 120 minutos\n  4) Sair\n";
}

int selecionaOpcao() {
  while(true) {
    int i;
    cout << "Digite a opção desejada (1 a 4)\n"; cin >> i;
    if(i >= 1 && i <= 4) return i;
    else cout << "Opção inválida!\n";
  }
}

void visualizarRelatorio(vector<Cliente> clientes) {
  for(int c = 0; c < clientes.size(); c++) {
    Cliente cl = clientes[c];
    cout << cl.getNome() << ", " << cl.getTelefone() << ", Tipo " << cl.getTipo() << ", Minutos: " << cl.getMinutos() << ", Conta = R$" << cl.calcularValorConta() << "\n";
  }
}

void visualizarReceita(vector<Cliente> clientes) {
  double o = 0;
  for(int c = 0; c < clientes.size(); c++) {
    Cliente cl = clientes[c];
    o += cl.calcularValorConta();
  }
  cout << "A receita total da empresa foi de R$" << o << "\n";
}

void listaClientesConsumo(vector<Cliente> clientes) {
  for(int c = 0; c < clientes.size(); c++) {
    Cliente cl = clientes[c];
    if(cl.getMinutos() >= 120) cout << cl.getNome() << " utilizou " << cl.getMinutos() << " minutos\n";
  }
}

int main() {
  vector<Cliente> clientes(4);
  clientes[0] = Cadastrar();
  clientes[1] = Cadastrar();
  clientes[2] = Cadastrar();
  clientes[3] = Cadastrar();

  bool flag = 0;
  while(!flag) {
    geraMenu();
    int op = selecionaOpcao();

    switch(op) {
      case 1:
        visualizarRelatorio(clientes);
        break;
      case 2:
        visualizarReceita(clientes);
        break;
      case 3:
        listaClientesConsumo(clientes);
        break;
      case 4:
        flag = 1;
        break;
    }
  }
  cout << "Tchau! Esse programa foi desenvolvido por: Álvaro Antônio. aka Russo\n";
}
