#include <iostream>
using namespace std;

void isPrime(int x){
    int k = 0;
    int p = 2;
    bool running = true;
    while (k <= x) {
        running = true;
        for (int j = 2; j <= p - 1; j++) {
            if (p % j == 0) {
                running = false;
            }
        }

        if (running == true) {

            cout << p << ", ";
            k++;
        }
        p++;
    }
}

int main()
{
    int x; 
    cout << "Podaj liczbę do sprawdzenia: ";
    cin >> x;
    cout << endl;
    isPrime(x);
}