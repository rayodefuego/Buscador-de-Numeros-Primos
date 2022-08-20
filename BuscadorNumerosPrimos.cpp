#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int cantidadNumeros;
    vector<int> numerosPrimos {2};

    cout << "seleccione la cantidad de numeros que quieres ver si son primos: ";
    cin >> cantidadNumeros;

    cout << "los numeros primos que hay en " << cantidadNumeros << " son:" << endl;

    if (cantidadNumeros >= 2)cout << 2 << endl;


    for (int i = 3; i < cantidadNumeros; i++)
    {
        bool noPrimo = false;

        for (int j = 0; j < numerosPrimos.size(); j++)
        {
            if (i % numerosPrimos[j] == 0) noPrimo = true;
        }

        if (!noPrimo)
        {
            cout << i << endl;
            numerosPrimos.push_back(i);
        }
    }
    system("pause");
    return 0;
}
