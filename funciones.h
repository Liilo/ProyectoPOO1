#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
#include <string>
using namespace std;

class Enfermedad{
    private:
        vector<Sintoma> sintomas_enf;
    public:
        //constructor
        Enfermedad(int tipo_enfermedad, vector<Sintoma> sintomas_enf);
        //metodos de acceso
        vector<Sintoma> getSintomas_enf(); 
 };
 

 class Sintoma{
    private:
        bool estado_sintoma;
    public:
        //constructor
        Sintoma(bool estado_sintoma);
        //metodos de acceso
        void setEstado_sintoma();
        bool getEstado_sintoma();
};


class Paciente{
    private:
        string nombre;
        float altura;
        int edad;
        int masa;
        char genero;
        int presion_sanguinea;
        int pulso;
    
    public:
        void setNombre(string nombre);
        string getNombre();
        void setEdad(int edad);
        int getEdad();
        void setMasa(int masa);
        int getMasa();
        void setGenero(char genero);
        char getGenero();
        void setAltura(float altura);
        float getAltura();
        void setPresion_Sanguinea(int presion_sanguinea);
        int getPresion_Sanguinea();//rango normal presion:
                                   //120/80 mmHg
        float setPulso(int pulso);
        int getPulso(); //rango normal del pulso:
                        //niños=70/110; adultos 70/100


void inicializar_enfermedades();
void inicializar_sintomas();


#endif 
