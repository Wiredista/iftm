#include <bits/stdc++.h>
using namespace std;

 
void
imprimeVetor (int v[], int n)
{
  
std::cout << "{";
  
for (int i = 0; i < n - 1; i++)
    {
      
std::cout << v[i] << ",";
    
} 
std::cout << v[n - 1] << "}";

} 
 
int

main ()
{
  
int n = 10;
  
std::cin >> n;
  
int v[n];
  
for (int i = 0; i < n; i++)
    {
      
std::cin >> v[i];
    
} 
imprimeVetor (v, n);
  
 
return 0;

}
