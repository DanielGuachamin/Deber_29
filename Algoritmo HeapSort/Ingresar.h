using namespace std;
namespace ingresar
{
  void ingresar_arreglo(int A[100], int t)
  {
    for(int i = 1; i <= t;i++)
    {
      cout << "Ingrese elemento: ";
      cin >> A[i];
    }
  }
}
