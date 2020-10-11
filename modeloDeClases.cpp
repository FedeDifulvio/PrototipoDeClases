#include <cstdlib>
#include <iostream>
using namespace std;

class Proveedor{
      private:
      int codigo;
      char nombre[70];
      char mail[70];
      bool estado;

      public:
      Proveedor();
      ~Proveedor();
     void setCodigo (int);
     void setNombre(char []);
     void setMail (char []);
     void setEstado( bool );
      int getCodigo ();
     char * getNombre();
     char * getMail ();
 };



class Cliente{
      private:
      int codigo;
      int dni;
      char nombre[70];
      char apellido[70];
      char numTelefono[70];
      bool estado;

      public:
      Cliente ();
      ~Cliente();
     void setCodigo (int);
     void setNombre(char []);
      void setApellido(char []);
     void setMail (char []);
     void setEstado( bool );
      int getCodigo ();
     char * getNombre();
      char * getApellido();
     char *getMail ();
     char *getNumTelefono();

 };

class Fecha{
private:
      int dia, mes, anio;
 };

class Articulo{
protected:
      int codigo;
      char nombre[70];
      float precio;
      int codTipo;


public:
      void setCodigo();
      void setNombre();
      void  setPrecio(int);  ///recibe el subtipo del articulo. Ej: en el chocolate, un tipo es blanco y difiere en precio a los otros.
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







int main(){



  system("pause");
  return 0;

  }
