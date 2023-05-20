// Bubble Sort (Ordenação por Bolha):
// O Bubble Sort é um algoritmo de ordenação que percorre repetidamente o vetor, comparando elementos adjacentes e os trocando se estiverem na ordem errada. Esse processo é repetido até que todo o vetor esteja ordenado, onde o maior (ou menor) elemento "flutua" para a posição correta.

// O algoritmo funciona da seguinte maneira:
// - Compare o elemento atual com o próximo elemento e troque-os se estiverem fora de ordem.
// - Repita o processo acima para todo o vetor.
// - O maior (ou menor) elemento será colocado em sua posição correta após cada iteração.
// - Repita as iterações até que não haja mais trocas a serem feitas.

// O Bubble Sort também possui uma complexidade de tempo de O(n^2), onde n é o tamanho do vetor. No pior caso, o número de trocas realizadas pelo Bubble Sort é (n*(n-1))/2.
#include <iostream>
#include <vector>

using namespace std;

int bubbleSort(vector<int>& lista){
    int n = lista.size();
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
    int trocas = bubbleSort(lista);

    cout << "Numero de Trocas : " << trocas << endl << endl;
    cout << "Vetor Ordenado : ";
    for (int num : lista) {
        cout << num << " ";
    }
    cout << endl << endl;

    return 0;
}
