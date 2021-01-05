/******************************************************************************

    Code by: TheRotationSpecialist (aka. OfitzerKGB; aka. Russo; aka. Wiredista)
     - GitHub: https://github.com/Wiredista
     - E-mail: alvaro.antonio@bk.ru
 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void media(int n1, int n2) {
    cout << "Média das notas: " << fixed << setprecision(2) << ((float)n1+(float)n2)/2 << "\n";
}

int main()
{
    string nome1, nome2;
    int nota1, nota2;
    cin >> nome1 >> nota1;
    cin >> nome2 >> nota2;
    
    media(nota1, nota2);
}
