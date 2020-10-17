#include <cstdlib>
#include <iostream>
using namespace std;

class Proveedor{
      private:
      char codigo[5];   ///Codigo compuesto por  3 0 4 letras.
      char nombre[70];
      char mail[70];
      bool estado;

      public:
      Proveedor();
      ~Proveedor();
     void setCodigo ();
     void setNombre();
     void setMail ();
     void setEstado();
      int getCodigo ();
     char * getNombre();
     char * getMail ();
 };



class Cliente{
      private:
      int dni;  ///Su código indentificador
      char nombre[70];
      char apellido[70];
      char numTelefono[70];
      bool estado;

      public:
      Cliente ();
      ~Cliente();
     void setNombre();
      void setApellido();
     void setMail ();
     void setEstado();
     char * getNombre();
      char * getApellido();
     char *getMail ();
     char *getNumTelefono();

 };

class Articulo{
protected:
      char codigo[7];  ///Código alfanumerico compuesto por 3 numeros y 3 letras.
      char nombre[70];
      float precio;
      int codTipo;


public:
      void setCodigo();
      void setNombre();
      void  setPrecio();
      char *getNombre();
      float getPrecio();
      int getClasificacion();
};

class Chocolate : public Articulo{
public:
      void setTipoChocolate();      /// 1-BLANCO, 2- AMARGO, 3 -ALMENDRADO.
      int  getTipoChocolate();

};

class Bombon : public Articulo{
public:
      void setTipoBombon();      /// 1-COM�N, 2- CON LICOR.
      int  getTipoBombon();

};

class CajaBombon : public Articulo{
public:
      void setTipoBombon();      /// 1-COMUN, 2- CON LICOR.
      int  getTipoBombon();
      void setSurtido();      /// 1-igual 2-mixto
      int  getSurtido();

};

class BolsaCaramelos : public Articulo{
public:
      void setTipoCaramelo();     /// 1- miel  2-menta
      int  getTipoCaramelo();
      void setSurtido();      /// 1-igual 2-mixto
      int  getSurtido();

};

class Caramelo : public Articulo{
public:
  void setTipoCaramelo();
  int  getTipoCaramelo();
};


class Alfajor : public Articulo{
public:
  void setTipoAlfajor();
  int  getTipoAlfajor();
};


class Fecha{
      private:
      int dia, mes, anio;
      public:
      Fecha ();  ///Al instanciar un objeto fecha, se le asignará la fecha del sistema.
      int getDia();
      int getMes();
      int getAnio();
      void mostrarFecha();

};

class compra{
     private:
     int codCompra; ///Codigo numerico.
     char  codProducto[7]; /// 3 numeros y 3 letras
     char codProveedor[5]; /// 3 o cuatro letras
     char nombreProducto[30];
     char tipoProducto[50];
     int cantidad;
     Fecha hoy;


     public:

    void setCodigo(int );
    void setCodProducto();
    void setCantidad();
    void setCodProveedor();
    void setNombreProducto();
    void setTipoProducto();
    int getCodigo();
    char * getCodProducto();
    int  getCantidad();
    char *  getCodigoProveedor();
    char *  getNombreProducto();
    char *   getTipoProducto();
    Fecha getHoy();
    bool grabarEnDisco();

} ;


class IDGenerator{
private:
      int pos;
      int ID;
public:
     int generatePos();
      int generateID();
      int getID();
      int getPos();
      bool grabarEnDisco();
      bool leerDisco(int );
};










