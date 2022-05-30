#include <iostream>
#include "conio.h"
#include "stdlib.h"
#include "time.h"

using namespace std;

class Vehiculo{
	private:
		char *placa, *marca, *modelo;
		float precio;
	public:
		Vehiculo(){}
		Vehiculo (char *placa, char *marca, char *modelo, float precio){
			setPlaca(placa);
			setMarca(marca);
			setModelo(modelo);
			setPrecio(precio);
		}
		
		/* Metodos Modificadores */
		void setPlaca(char *n){placa =n;}
		void setMarca(char *a){marca =a;}
		void setModelo(char *c){modelo=c;}
		void setPrecio(float e){precio=e;}
		void setDatos(){
			char *placa= new char[20], *marca= new char[20], *modelo= new char[20], *carrera= new char[20];
			float precio;
			cout<< "Favor Ingresar la Placa del Vehiculo: ";
			fflush (stdin);
			fgets(placa, 20, stdin);
			cout<<"Favor ingresar la marca del vehiculo: ";
			fflush (stdin);
			fgets(marca, 20, stdin);
			cout<<"Favor ingresar el modelo del vehiculo: ";
			fflush (stdin);
			fgets(modelo, 20, stdin);
			cout<<"Favor ingresar el precio:  $ ";
			cin>>precio;	
			setPlaca(placa); setMarca(marca); setModelo(modelo); setPrecio(precio);
		}
		
		/* Metodos Acesores */
		char * getPlaca(){return placa;}
		char * getMarca(){return marca;}
		char * getModelo(){return modelo;}
		int getPrecio(){return precio;}
		
		void mostrarVehiculo(){
			cout<< "\nPlaca: "<< getPlaca() << "\nMarca: " << getMarca() << "\nModelo: " << getModelo() << "\nPrecio: " << getPrecio();
			}
	
};


int main() {
	
	cout<<" *********************************"<<endl;
	cout<<"!       Buscador de Autos         !"<<endl;
	cout<<" *********************************"<<endl<<endl;
	
	cout<<"Ingresa los datos del auto que desea ver:"<<endl<<endl;
	Vehiculo obj[1];
	obj[1].setDatos();
	
	cout<<endl<<"El vehiculo ingresado es:"<<endl<<endl;
	obj[1].mostrarVehiculo();
	cout<<endl;
	
	int op;
	
	cout<<endl<<"¿Desea comprar el auto?"<<endl;
	cout<<endl<<"1. Si"<<endl;
		cout<<endl<<"2. No"<<endl;
	
	cin>>op;
	
	switch (op){
		
		case 1:		
    		int num, c;
  			  srand(time(NULL));
		    
		    for(c = 1; c < 2; c++)
		    {
		        num = 1 + rand() % (11 - 1);
		    }
		    
			cout<<"Por favor pasar a caja, su numero de gestion es: "<<"***"<<num<<"***"<<endl;
			cout<<"Gracias por su compra"<<endl;
			break; 
		case 2:
			cout<<"Gracias, regrese pronto"<<endl;
			break;
		
		default:
			cout<<"Opcion Incorrecta, programa finalizado"<<endl;
			break;
	}
	

	system("pause");
	return 0;

}
