#include <iostream>

using namespace std;

void contarIter(int n);
void contarRec(int);

int main(void)
{
    int n;

    cout << endl;
    cout << " Este programa contara desde el numero 1 hasta el que escojas y viceversa " << endl << endl;
    cout << "Hasta que numero deseas contar? ";
    cin >> n;

    contarIter(n);
    contarRec(n);

    cout << endl;
    return 0;

}

void contarRec(int n)
{
    if(n >= 1){
        cout << n << endl;
        n = n- 1;
        contarRec(n);
    }
}

void contarIter(int n)
{
    int i;

    i = 1;
    while(i <= n){
        cout << i << endl;
        i = i + 1;
    }
}