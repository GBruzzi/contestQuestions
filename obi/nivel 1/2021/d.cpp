#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> copas;
    vector<int> ouros;
    vector<int> paus;
    vector<int> espadas;

    bool erroPaus = false;
    bool erroEspadas = false;
    bool erroOuros = false;
    bool erroCopas = false;

    for (int i = 0; i < s.size(); i += 3) {
        string value_str = s.substr(i, 2); 
        int value = stoi(value_str); 

        if (s[i + 2] == 'P') {
            for (int p : paus) {
                if (p == value) {
                    erroPaus = true;
                    break;
                }
            }
            paus.push_back(value);
        } else if (s[i + 2] == 'C') {
            for (int p : copas) {
                if (p == value) {
                    erroCopas = true;
                    break;
                }
            }
            copas.push_back(value);
        } else if (s[i + 2] == 'U') {
            for (int p : ouros) {
                if (p == value) {
                    erroOuros = true;
                    break;
                }
            }
            ouros.push_back(value);
        } else {
            for (int p : espadas) {
                if (p == value) {
                    erroEspadas = true;
                    break;
                }
            }
            espadas.push_back(value);
        }
    }

    int restEspadas = 13 - espadas.size();
    int restCopas = 13 - copas.size();
    int restOuros = 13 - ouros.size();
    int restPaus = 13 - paus.size();

    if (!erroCopas) {
        cout << restCopas << endl;
    } else {
        cout << "erro" << endl;
    }

    if (!erroEspadas) {
        cout << restEspadas << endl;
    } else {
        cout << "erro" << endl;
    }

    if (!erroOuros) {
        cout << restOuros << endl;
    } else {
        cout << "erro" << endl;
    }

    if (!erroPaus) {
        cout << restPaus << endl;
    } else {
        cout << "erro" << endl;
    }

    return 0;
}
