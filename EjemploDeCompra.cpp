#include <iostream>
#include <cstdlib>

 using namespace std;

class compraParcial{
     private:
     int cod; ///Codigo numerico.
     int  codProducto;
     int cantidad;
     compraParcial *compras;

     public:

     void setCodigo();
     void CodProducto();
     void setCantidad();
     void mostrarCompras();
     int getCodigo();
     int getCodProducto();
     int  getCantidad();



} ;

void compraParcial :: setCodigo(){
      cout<<"Ingrese codigo de compra: ";
      cin>> cod;
}


void compraParcial :: CodProducto(){
      cout<<"Ingrese codigo de producto: ";
      cin>> codProducto;
}

void compraParcial :: setCantidad(){
      cout<<"Ingrese cantidad: ";
      cin>> cantidad;
}

 int  compraParcial:: getCodigo(){
      return cod;
 }
int   compraParcial:: getCodProducto(){
      return codProducto;


}
int   compraParcial:: getCantidad(){
      return cantidad;
}


void compraParcial :: mostrarCompras( compraParcial a, compraParcial b, compraParcial c ) {

      compras = new compraParcial[3];
      compra[0] = a;
      compra[1] = b;
      compra[2] = c;
      for( int x=0; x<3; x++) {
           cout<< compra[x].getCodigo();
      }
}






int main(){

      compraParcial reg;
      compraParcial reg2;
      compraParcial reg3;

      compraParcial mostrar;

      reg.setCodigo();
      reg.codProducto();
      reg.setCantidad();

      reg2.setCodigo();
      reg2.codProducto();
      reg2.setCantidad();

      reg3.setCodigo();
      reg3.codProducto();
      reg3.setCantidad();

     /// mostrar.mostrarCompras(reg, reg2, reg3);


  system("pause");
  return 0;

  }
