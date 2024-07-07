#include <iostream>
 
using namespace std;
 
int main() {
 
    int idade;
    
    cin >> idade;
    
    int ano=0;
    int mes=0;
    int dias=0;
    
    ano = idade / 365;
    idade %= 365;
    
    mes = idade / 30;
    idade %= 30;
    
    dias = idade;
    
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
 
    return 0;
}