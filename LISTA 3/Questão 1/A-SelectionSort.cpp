// Selection Sort (Ordenação por Seleção):
// O Selection Sort é um algoritmo simples de ordenação que funciona encontrando repetidamente o elemento mínimo (ou máximo) do vetor não ordenado e colocando-o no início do vetor. O processo continua para o restante do vetor até que todo o vetor esteja ordenado.

// O algoritmo funciona da seguinte maneira:
// - Encontre o elemento mínimo no vetor não ordenado.
// - Troque o elemento mínimo com o primeiro elemento do vetor não ordenado.
// - Repita o processo acima para o restante do vetor, excluindo o elemento já ordenado.

// O Selection Sort possui uma complexidade de tempo de O(n^2), onde n é o tamanho do vetor. O número de trocas realizadas pelo Selection Sort é (n-1) no pior caso.
#include <iostream>
#include <vector>

using namespace std;

int selectionSort(vector<int>& lista) {
    int n = lista.size();
    int trocas = 0;

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (lista[j] < lista[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            swap(lista[i], lista[minIndex]);
            trocas++;
            cout << "Lista depois da troca " << trocas << ": ";
            for(int i = 0; i < lista.size(); i++){
                int num = lista[i];
                cout << num << " ";
            }
            cout << endl << endl;
        }
    }

    return trocas;
}

int main() {
    int n;
    cout << "Digite o tamanho da lista : ";
    cin >> n;
    cout << endl;
    vector<int> lista(n);
    cout << "Digite os elementos da lista : ";
    for (int i = 0; i < n; ++i) {
        cin >> lista[i];
    }
    cout << endl;
    int trocas = selectionSort(lista);

    cout << "Numero de Trocas : " << trocas << endl << endl;
    cout << "Vetor Ordenado : ";

    for (int i = 0; i < lista.size(); i++) {
    int num = lista[i];
    cout << num << " ";
    }
    cout << endl << endl;

    return 0;
}
