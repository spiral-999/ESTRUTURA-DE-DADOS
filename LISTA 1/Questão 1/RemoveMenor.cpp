#include <iostream>
#include <vector>
using namespace std;

vector<int> removeMenor(vector<int> L, int x)
{
    vector<int> lista2;
    for (int valor : L)
    {
        if (valor > x)
        {
            lista2.push_back(valor);
        }
    }
    return lista2;
}

int main()
{
    int n;
    cout << "Digite o tamanho da sua lista : ";
    cin >> n;
    vector<int> lista(n);
    cout << "Digite os elementos da sua lista : ";
    for(int i = 0; i < n; i++){
        cin >> lista[i];
    }
    cout << "Digite o numero que deseja : ";
    int x;
    cin >> x;
    vector<int> lista2 = removeMenor(lista, x);
    for (int valor : lista2)
    {
        cout << valor << " ";
    }
    cout << endl;
}