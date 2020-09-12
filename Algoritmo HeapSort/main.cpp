#include <iostream>
#include <fstream>
#include "HeapSort.h"
#include "Ingresar.h"

using namespace heap;
using namespace std;
using namespace ingresar;

const int MAX = 100;
int main()
{
  ofstream archivo;
  int arreglo[MAX], tamanio;
  setlocale(LC_ALL,"spanish");
  archivo.open("HeapSort.txt", ios::out);
  if(archivo.is_open())
  {
    cout << "\nIngresa la cantidad de elementos del arreglo: ";
    cin >> tamanio;
    ingresar_arreglo(arreglo, tamanio);
    archivo << "Arreglo original: " << endl;
    for(int i = 1; i <= tamanio; i++)
    {
      archivo << arreglo[i] << "|";
    }
    HeapSort(arreglo,tamanio);
    archivo << "\nArreglo ordenado: " << endl;
    for(int i = 1; i <= tamanio; i++)
    {
      archivo << arreglo[i] << "|";
    }
    cout << "\nRevisar el archivo 'HeapSort'" << endl;
  }
  else
  {
    cout << "\nEl archivo no abrio exitosamente" << endl;
  }
  return 0;
}

