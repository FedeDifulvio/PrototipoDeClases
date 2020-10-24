#include <cstdlib>
#include <iostream>
using namespace std;


class Proveedor {
    private:
    char codigo[4];      // CODIGO DE 3 CARACTERES
    char nombre[50];
    char email [50];
    bool estado;

    public:
    void setCodigo();
    void setNombre();
    void setEmail ();
    void setEstado(bool);
    char * getCodigo();
    char * getNombre();
    char * getEmail ();
    int  getPosicion(char[]);
    bool getEstado();
    bool grabarEnDisco(int = -1);
    bool leerDeDisco(int);
    void mostrarRegistro();
    bool validarCodProveedor(char*);

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
