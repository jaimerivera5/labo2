#include <iostream> 
using namespace std;

int MCD(int a, int b)
{
    if(b==0)
        return a;
    else
        return MCD(b, a%b);
}


int main()
{
    int num1=0,num2=0;
    cout<<endl;
    cout << "Este programa obtendra el MCD de dos numeros por el metodo de Euclides" << endl << endl;
    cout << "Introduce el primer numero: "<< endl;
    cin >> num1;
    cout << "Introduce el segundo numero: "<< endl;
    cin >> num2;
    cout << "El maximo comun divisor de estos dos numeros es: " << MCD (num1,num2);
    return 0;
}