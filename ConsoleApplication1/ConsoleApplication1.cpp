#include <iostream>
using namespace std;
int NWD(int a, int b){
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main()
{
    int a, b;

    cout << "Podaj Libczę a: ";
    cin >> a;
    cout << endl << "Podaj liczbę b: ";
    cin >> b;
    cout << "NWD: "<< NWD(a, b);
    cout << ", NWW: " << (a*b)/NWD(a, b);

}