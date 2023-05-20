// Insertion Sort (Ordenação por Inserção):
// O Insertion Sort é um algoritmo de ordenação que constrói uma matriz ordenada à medida que percorre o vetor. Ele divide o vetor em uma parte ordenada e uma parte não ordenada. A cada iteração, ele seleciona um elemento da parte não ordenada e o insere na posição correta da parte ordenada.

// O algoritmo funciona da seguinte maneira:
// Percorra o vetor da esquerda para a direita.
// Selecione um elemento da parte não ordenada.
// Compare o elemento com os elementos na parte ordenada e desloque os elementos maiores para a direita para abrir espaço para o elemento selecionado.
// Insira o elemento selecionado na posição correta na parte ordenada.
// Repita o processo para todo o vetor.

// O Insertion Sort também possui uma complexidade de tempo de O(n^2), onde n é o tamanho do vetor. No pior caso, o número de trocas realizadas pelo Insertion Sort é (n*(n-1))/2.
#include <iostream>
#include <vector>

using namespace std;

int insertionSort(vector<int>& lista){
    int n = lista.size();
    int trocas = 0;
    for(int i = 1; i < n; i++){
        int key = lista[i];
        int j = i - 1;
        while(j >= 0 && lista[j] > key){
            lista[j+1] = lista[j];
            j--;
            trocas++;
            cout << "Lista depois da troca " << trocas << ": ";
            for(int i = 0; i < lista.size(); i++){
                int num = lista[i];
                cout << num << " ";
            }
            cout << endl << endl;
        }
        lista[j+1] = key;
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
    int trocas = insertionSort(lista);

    cout << "Numero de Trocas : " << trocas << endl << endl;
    cout << "Vetor Ordenado : ";

    for (int i = 0; i < lista.size(); i++) {
    int num = lista[i];
    cout << num << " ";
    }
    cout << endl << endl;

    return 0;
}
