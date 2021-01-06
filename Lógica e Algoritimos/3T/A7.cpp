#include <bits/stdc++.h>
using namespace std;

class Conta{
 
private:
  int numero; 
  double saldo = 0;
  double limite;
  string nome;  

public:

void creditar (double valor){
  saldo += valor;
}
int debitar (double valor){
 if (saldo + limite >= valor){
    saldo -= valor;
  return 1;
}
  else {
    return 0;
  }

}

double getSaldo(){
return saldo;
}

int getNumero(){
return numero;
}

double getLimite(){
return limite;
}

string getNome(){
return nome;
}

void setNome(string v_nome){
   nome = v_nome;
}

int setNumero(int v_numero){
   if (v_numero >= 1 && v_numero <= 10000){
   numero = v_numero;
   return 1;
  }
   else{
   return 0;
  }
}

 int setLimite(int v_limite){
  if (v_limite >= 100 && v_limite <= 1000){
  limite = v_limite;
  return 1;
  }
  else{
  return 0;
  }
}

};

int main ()
{
   Conta conta;
   
   cout << "Digite o nome do cliente: ";
   string nome;
   cin >> nome;
   conta.setNome(nome);

   cout << "No cliente: " << conta.getNome() <<endl;
   cout << "Digite o numero da conta: ";
   int n;
   cin >> n;
   conta.setNumero(n);

   while (conta.setLimite(n) == 0){
   cout << "O numero não foi cadastrado, tente novamente. Valores válidos: 1 a 10000. "<<endl;
   cin >> n;
   }

   cout << "O numero da conta é " << conta.getNumero() <<endl;

   cout << "Digite o limite da conta: ";
   int l;
   cin >> l;
  
   while (conta.setLimite(l) == 0){
   cout << "O limite não foi cadastrado, tente novamente. Valores válidos: 100 a 1000. "<<endl;
   cin >> l;
   }
   
   cout << "Nome cliente " << conta.getNome() <<endl;
   cout << "O numero da conta é " << conta.getNumero() <<endl;
   cout << "O limite da conta é " << conta.getLimite() <<endl;
   cout << "O saldo da conta é " << conta.getSaldo() <<endl; 

   conta.creditar(100);
   if (conta.debitar(10000) == 1){
     cout << "Debito realizado. " <<endl;
}
   else{
     cout << "Não foi possível realizar debito." <<endl;
}

 

return 0;
}
