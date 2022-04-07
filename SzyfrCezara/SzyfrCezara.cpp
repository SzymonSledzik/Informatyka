#include <iostream>
using namespace std;

void szyfCezara(int klucz, char tab[]) {
	int dl = strlen(tab);


	if (!(klucz >= -26 && klucz <= 26)) {
		return;
	}

	if (0 <= klucz) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= 'z') {
				tab[i] += klucz;
			}
			else { tab[i] = tab[i] + klucz - 26; }

		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz >= 'a') {
				tab[i] += klucz;
			}
			else { tab[i] = tab[i] + klucz + 26;}
		}
	}


}


int main()
{
	char tab[1000];
	cout << "Podaj wyraz skladajacy sie z malych liter: ";
	cin >> tab;
	cout << endl;
	int klucz;
	cout << "Podaj klucz z przedzialu [-26..26]: ";
	cin >> klucz;
	cout << endl;

	szyfCezara(klucz, tab);

	cout << "Po zaszyfrowaniu: " << tab;

	szyfCezara(-klucz, tab);

	cout << "Po odszyfrowaniu: " << tab;



}