#include <iostream>
#include <vector>
using namespace std;

vector<int> removeMenores(vector<int>& L, int x) {
    vector<int> novaLista;
    for (int valor : L) {
        if (valor >= x) {
            novaLista.push_back(valor);
        }
    }
    return novaLista;
}

int main() {
    vector<int> lista = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 5;
    vector<int> novaLista = removeMenores(lista, x);
    for (int valor : novaLista) {
        cout << valor << " ";
    }
    cout << endl;

    return 0;
}
