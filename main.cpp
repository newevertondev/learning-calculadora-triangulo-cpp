#include <bits/stdc++.h>
using namespace std;

int main() {
    float base;
    float altura;
    float result;
    
    cout << "Digite o valor da base ";
    cin >> base;
    
    cout << "Digite o valor da altura: ";
    cin >> altura;
    
    result = (base * altura) /2;
    cout << "O resultado da área do triângulo retângulo é = " <<result;
    
    return 0;
}