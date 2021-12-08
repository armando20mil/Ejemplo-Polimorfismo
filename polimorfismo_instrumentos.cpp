#include<iostream>
using namespace std;
//polimorfismo :responder en forma diferente al mismo mensaje
class Instrumento{
	public:
	    virtual void producirSonido(){
	    	cout<<"se crea un sonido"<<endl;
		}
};
class Guitarra : public Instrumento{
	public:
	    void producirSonido(){ 
			cout<<"su sonido es producido por la vibracion de las cuerdas"<<endl;
		}
};
class Flauta : public Instrumento{
	public:
	    void producirSonido(){ 
			cout<<"su sonido se produce al pasar una corriente de aire por alguno de sus orificios"<<endl;
		}
};
class Platillos : public Instrumento{
	public:
	    void producirSonido(){ 
			cout<<"su sonido se produce entrechocando los platillos uno con otro o percutiendolos con baquetas"<<endl;
		}
};  
  
int main() {
    Guitarra guitarra;
	Flauta flauta;
    Platillos platillos;
	 
    guitarra.producirSonido();
	flauta.producirSonido();
	platillos.producirSonido(); 
    return 0;
} 
