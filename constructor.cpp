#include <iostream>
#include <vector>
using namespace std;
class A{
  int *ptr;
public:
  A(){
    cout << "Llamando al constructor por defecto\n";
    ptr = new int ;
  }
  A( const A & obj){
    this->ptr = new int;
    cout << "Llamando al constructor copia\n";
  }
  A ( A && obj){
    // Simplemente desplazará los objetos sin crear una copia.
     cout << "Llamando al constructor de movimiento\n";
    this->ptr = obj.ptr;
    obj.ptr = NULL;
  }
  ~A(){
    cout << "Llamando al destructor\n";
    delete ptr;
  }
};
int main() {
  vector <A> vec;
  vec.push_back(A());
  return 0;
}