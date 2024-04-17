#include <iostream>


using namespace std;

int main () {

int numero;

cout<<"Ingrese un numero para mostrar la tabla de multiplicar"<<endl;
cin>>numero;

for (int contador=1; contador<=10; contador++) {


    cout<<numero<<"x"<<contador<<"="<<numero * contador<<"\n";

}

return 0;
}
