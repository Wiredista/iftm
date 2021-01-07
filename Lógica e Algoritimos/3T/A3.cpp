#include <bits/stdc++.h>
using namespace std;

 
void
imprime (int matriz[2][2], int qtdLinhas, int qtdColunas)
{
  
 
std::cout << "{";
  
for (int i = 0; i < qtdLinhas; i++)
    {
      
std::cout << "{";
      
for (int j = 0; j < qtdColunas - 1; j++)
	{
	  
int elemento = matriz[i][j];
	  
std::cout << elemento;
	  
std::cout << ",";
	
} 
std::cout << matriz[i][qtdColunas - 1];
      
std::cout << "}";
    
} 
std::cout << "}";

} 
 
int

main ()
{
  
 
int qtdLinhas = 2;
  
int qtdColunas = 2;
  
int m[2][2];
  
 
for (int i = 0; i < qtdLinhas; i++)
    {
      
for (int j = 0; j < qtdColunas; j++)
	{
	  
std::cin >> m[i][j];
    
} 
} 
 
imprime (m, qtdLinhas, qtdColunas);
  
 
return 0;

}
