#include <iostream>
using namespace std;
int main() 
{
  int C,F;
  char N [20];
  cout << "Digite su nombre: "<<endl;
  cin >> N;
  cout << "Digite los grados centigrados que desea convertir "<<endl;
  cin >> C;
  F = (C * 9/5) + 32;
  cout << N << "La convercion de  grados centigrados a fahrenheit: "<<F;

}